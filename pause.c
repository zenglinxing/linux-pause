/* coding: utf-8 */
/*
Author: Lin-Xing Zeng
Email:  jasonphysics@outlook.com | jasonphysics19@gmail.com

This file is part of Linux-pause, in ./pause.c
*/
#include<stdio.h>
#include<termios.h>
#include<unistd.h>

#define N 8

int main(int argc,char *argv[])
{
    /* change the setting of the terminal, without showing the input */
    struct termios old_term, new_term;
	tcgetattr(STDIN_FILENO, &old_term);
	new_term = old_term;
	new_term.c_lflag &= ~(ECHO | ICANON); // disable displaying the input and line buffer
	tcsetattr(STDIN_FILENO, TCSANOW, &new_term);
	/* display */
	printf("Press any key to continue");
    volatile int c = getchar();
	printf("\n");
	/* restore the terminal's setting */
	tcsetattr(STDIN_FILENO, TCSANOW,&old_term);
    return 0;
}
