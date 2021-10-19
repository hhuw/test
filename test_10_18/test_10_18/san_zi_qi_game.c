#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void mune()
{
	printf("*********************************\n");
	printf("**    1.play         0.exit    **\n");
	printf("*********************************\n");
}
char test(char board[][3])
{
	int a=0;
	int b=0;
	int c=0;
	for(a=0;a<3;a++)
	{
		if(board[a][1] == board[a][2] && board[a][0] == board[a][1])
			return board[a][0];
		if(board[0][a] == board[1][a] && board[1][a] == board[2][a])
			return board[0][a];
		for(b=0;b<3;b++)
		{
			if(board[a][b] != ' ')
				c++;
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[0][0];
	if(board[0][2] == board[1][1] && board[2][0] == board[1][1])
		return board[1][1];
	if(c == 9)
		return 'p';
}

void cleanboard(char board[][3])
{
	int hang=0;
	int lie=0;
	for(hang=0;hang<3;hang++)
	{
		for(lie=0;lie<3;lie++)
		{
			board[hang][lie] = ' ';
		}
	}
}
void game(char board[][3])
{
	cleanboard(board);
	while(1)
	{
		char ret = 0;
		displayboard(board);
		playermove(board);
		ret = test(board);
		if(ret == 'p')
		{
			displayboard(board);
			printf("平局\n");
			break;
		}
		if(ret == '*')
		{
			displayboard(board);
			printf("玩家获胜\n");
			break;
		}
		if(ret == '#')
		{
			displayboard(board);
			printf("电脑获胜\n");
			break;
		}
		computermove(board);
		ret = test(board);
		if(ret == 'p')
		{
			displayboard(board);
			printf("平局\n");
			break;
		}
		if(ret == '*')
		{
			displayboard(board);
			printf("玩家获胜\n");
			break;
		}
		if(ret == '#')
		{
			displayboard(board);
			printf("电脑获胜\n");
			break;
		}
	}
}
void displayboard(char board[][3])
{
	printf(" %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
	printf("-----------\n");
	printf(" %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
	printf("-----------\n");
	printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
}
void playermove(char board[][3])
{
	while(1)
	{
		int a;
		int b;
		printf("请输入坐标>>>");
		scanf("%d%d",&a,&b);
		if(board[a-1][b-1] != ' ')
		{
			printf("坐标已被占用，请重新输入!\n");
			continue;
		}
		if((a<0 && a>3) || (b<0 && b>3))
		{
			printf("输入坐标无效，请重新输入!\n");
			continue;
		}
		board[a-1][b-1] = '*';
		break;

	}
}
void computermove(char board[][3])
{
	int a;
	int b;
	do
	{
		a = rand()%3;
		b = rand()%3;
		if(board[a][b] == ' ')
			board[a][b] = '#';
	}
	while(board[a][b] != '#');
}
void main()
{
	int a=0;
	char board[3][3] = {0};
	srand((unsigned int)time(NULL));
	do
	{
		mune();
		scanf("%d",&a);
		switch(a)
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
	while(a);
}