/* coding: utf-8 */
/*
Author: Lin-Xing Zeng
Email:  jasonphysics@outlook.com | jasonphysics19@gmail.com

This file is part of Linux-pause, in ./pause.c
*/
#include<stdlib.h>

int main(int argc,char *argv[])
{
    system("bash -c \"read -n 1 -s -r -p 'Press any key to continue'\"; echo");
    return 0;
}
