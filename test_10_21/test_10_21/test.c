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
	printf("������>>");
	scanf("%d",&intput);
	switch(intput)
	{
	case 1:
		game(mine,show);
		break;
	case 0:
		break;
	default:
		printf("�����������������\n");
	}
	}
	while(intput);

}