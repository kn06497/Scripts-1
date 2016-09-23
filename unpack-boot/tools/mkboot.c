#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void load_menu(void);
void dtb(void);
void non_dtb(void);
char *build = "new";
int main(int argc, char** argv)
{
    load_menu();
    return 0;
}
 
void load_menu(void)
{
    int choice;
 
    do
    {
   system("echo 'UNPACK-BOOT'");
        printf("1. Without dtb\n");
	printf("2. With dtb\n");
        printf("3. Exit\n");
        scanf("%d",&choice);
 
        switch(choice)
        {
            case 1: non_dtb();
                break;
            case 2: dtb();
		break;
            case 3: printf("Quitting program!\n");
		unlink(build);
                exit(0);
                break;
            default: printf("Invalid choice!\n");
                break;
        }
 
    } while (choice != 3);
 
}

void non_dtb(void)
{
    		system("chmod 775 *");
    		system("cp tools/non-dtb non-dtb");
    		system(" ./non-dtb ;rm non-dtb");
		unlink(build);
                exit(0);
}     
 
void dtb(void)
{
    		system("chmod 775 tools/*");
    		system("cp tools/dtb dtb");
    		system("./dtb ;rm dtb");
		unlink(build);
                exit(0);
}
