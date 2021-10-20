#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void main()
{
	int l=0;
	char board[3][3] = {0};
	srand((unsigned int)time(NULL));
	do
	{
		mune();
		scanf("%d",&l);
		switch(l)
		{
		case 1:
			game(board);
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	}
	while(l);
}