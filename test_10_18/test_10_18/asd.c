#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void mune()
{
	printf("*********************************\n");
	printf("**    1.play         0.exit    **\n");
	printf("*********************************\n");
}
char test(char board[3][3])
{
	int i=0;
	for(i=0; i<3; i++)
	{
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')//**��3������**
			return board[i][0];//**ֻҪ�����ؿո���Ϸ����**
	}
	for(i=0; i<3; i++)
	{
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')//**��3������**
			return board[0][i];
	}
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!=' ')//**�Խ�������**
	{
		return board[1][1];
	}

	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!=' ')
	{
		return board[1][1];
	}
	if(IsFull(board))//**�����ж��Ƿ����ƽ��**
	{
		return 'p';
	}
}

void cleanboard(char board[3][3])
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
void game(char board[3][3])
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
			printf("ƽ��\n");
			break;
		}
		if(ret == '*')
		{
			displayboard(board);
			printf("��һ�ʤ\n");
			break;
		}
		if(ret == '#')
		{
			displayboard(board);
			printf("���Ի�ʤ\n");
			break;
		}
		computermove(board);
		ret = test(board);
		if(ret == 'p')
		{
			displayboard(board);
			printf("ƽ��\n");
			break;
		}
		if(ret == '*')
		{
			displayboard(board);
			printf("��һ�ʤ\n");
			break;
		}
		if(ret == '#')
		{
			displayboard(board);
			printf("���Ի�ʤ\n");
			break;
		}
	}
}
void displayboard(char board[3][3])
{
	printf(" %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
	printf("-----------\n");
	printf(" %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
	printf("-----------\n");
	printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
}
void playermove(char board[3][3])
{
	while(1)
	{
		int a;
		int b;
		printf("����������>>>");
		scanf("%d%d",&a,&b);
		if(board[a-1][b-1] != ' ')
		{
			printf("�����ѱ�ռ�ã�����������!\n");
			continue;
		}
		if((a<0 && a>3) || (b<0 && b>3))
		{
			printf("����������Ч������������!\n");
			continue;
		}
		board[a-1][b-1] = '*';
		break;

	}
}
void computermove(char board[3][3])
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
int IsFull(char board[][3])
{
		int i=0;
		for(i=0; i<3; i++)
		{
			int j=0;
			for(j=0; j<3; j++)
			{
				if(board[i][j]==' ')
					return 0;

			}
		}
		return 1;
	}