#include "game.h"
void main()
{
	char show[hangs][lies] = {0};
	char mine[hangs][lies] = {0};
	int intput;
	srand((unsigned int)time(NULL));
	do
	{
	
		menu();
	printf("请输入>>");
	scanf("%d",&intput);
	switch(intput)
	{
	case 1:
		game(mine,show);
		break;
	case 0:
		break;
	default:
		printf("输入错误，请重新输入\n");
	}
	}
	while(intput);

}