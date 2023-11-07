/* coding: utf-8 */
/*
Author: Lin-Xing Zeng
Email:  jasonphysics@outlook.com | jasonphysics19@gmail.com

This file is part of Linux-pause, in ./src/pause-func.c
*/
#include<stdio.h>
#include<termios.h>
#include<unistd.h>

int winpause(void)
{
    /* change the setting of the terminal, without showing the input */
    struct termios old_terminal, new_terminal;
	tcgetattr(STDIN_FILENO, &old_terminal);
	new_terminal = old_terminal;
	new_terminal.c_lflag &= ~(ECHO | ICANON); /* disable displaying the input and line buffer */
	tcsetattr(STDIN_FILENO, TCSANOW, &new_terminal);
	/* display */
	printf("Press any key to continue");
    volatile int c = getchar();
	printf("\n");
	/* restore the terminal's setting */
	tcsetattr(STDIN_FILENO, TCSANOW,&old_terminal);
    return c;
}
