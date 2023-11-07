/* coding: utf-8 */
/*
Author: Lin-Xing Zeng
Email:  jasonphysics@outlook.com | jasonphysics19@gmail.com

This file is part of Linux-pause, in ./src/pause.c
*/
#include<stdio.h>
#include<termios.h>
#include<unistd.h>

#include"pause-func.h"

#define N 8

int main(int argc,char *argv[])
{
    int c = winpause();
    return 0;
}
