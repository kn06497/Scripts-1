#!/bin/bash
echo "Enter java version which you want to install"
version=""
read version 
sudo apt-add-repository ppa:webupd8team/java
sudo apt-get update
echo "Installing oracle-java-$version "
sudo apt-get install oracle-java$version-installer
