#include "game.h"
void menu()
{
	printf("**********************************\n");
	printf("*************  1.play  ************\n");
	printf("*************  0.exit   ***********\n");
	printf("**********************************\n");
}
void cleanboard(char arr[][lies],char ret)
{
	int x = 0;
	int y = 0;
	for(x=0;x<lies;x++)
	{
		for(y=0;y<hangs;y++)
		{
			arr[y][x] = ret;
		}
	}
}
void display(char arr[][lies])
{
	int x,y;
	for(x=0;x<=lie;x++)
	{	
		printf("%d ",x);
	}
	printf("\n");
	for(y=1;y<=hang;y++)
	{		
		printf("%d ",y);
		for(x=1;x<=lie;x++)
		{
			printf("%c ",arr[y][x]);
		}
		printf("\n");
	}
}
void lei(char arr[][lies])
{
	int x,y;
	int counts = count;
	while(counts>0)
	{
	x = rand()%lie+1;
	y = rand()%hang+1;
	if(arr[y][x]=='0')
	{
	arr[y][x] = '1';
	counts--;
	}
	}
}
int find(char mine[][lies],char show[][lies])
{
	int x,y;
	int a = 1;
	int core = 0;
	printf("ÇëÊäÈë×ø±ê\n");
	while(a)
	{
		scanf("%d%d",&y,&x);
		if(x>=1 && x<=lie && y>=1 &&y<=hang)
		{
			a = 0;
		}
		else
		{
			printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë!\n");
			a = 1;
		}
	}
	if(mine[y][x] == '1')
	{
		return 0;
	}
	else
	{
		core = mine[y-1][x]+mine[y-1][x+1]+mine[y][x+1]+mine[y+1][x+1]+mine[y+1][x]+mine[y+1][x-1]+mine[y][x-1]+mine[y-1][x-1]-8*'0';
		show[y][x] = '0'+core;
		core = 0;
		
		
		
		
		return 1;
	}
}

void game(char mine[][lies],char show[][lies])
{
	int ret;
	int time = 0;
	int a = 0;
	a = hang*lie-count;
	cleanboard(mine,'0');
	cleanboard(show,'*');
	//display(mine);
	display(show);
	lei(mine);
	//display(mine);
	do
	{
		ret = find(mine,show);
		if(ret != 0)
		{
			display(show);
			time++;
			if(time == a)
			{
				break;
			}
		}
	}
	while(ret);
	if(ret == 0)
	{
		printf("ºÜÒÅº¶£¬Äú±»Õ¨ËÀÁË!\n");
		display(mine);
	}
	else
	{
	printf("¹§Ï²Äú£¬ÓÎÏ·Ê¤Àû£¡\n");
	display(mine);
	}
}