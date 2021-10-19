#define _CRT_SECURE_NO_WARNINGS 1
void mune();
#include <stdio.h>
void game();
#include <stdlib.h>
#include <time.h>
void cleanboard(char board[][3]);
void playermove(char board[][3]);
void computermove(char board[][3]);
char test(char board[][3]);
void displayboard(char board[][3]);