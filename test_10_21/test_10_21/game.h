#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
#define hang 9
#define count 10;
#define lie 9
#define hangs hang+2
#define lies lie+2
void cleanboard(char arr[][lies],char ret);
void game(char mine[][lies],char show[][lies]);
void display(char arr[][lies]);
void lei(char arr[][lies]);
int find(char mine[][lies],char show[][lies]);