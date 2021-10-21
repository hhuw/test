#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	//int a,b,c;
	//int tem = 0;
	//scanf("%d%d%d",&a,&b,&c);
	//if(c>a)
	//{
	//	tem = a;
	//	a = c;
	//	c = tem;
	//}
	//if(c>b)
	//{
	//	tem = b;
	//	b = c;
	//	c = tem;
	//}
	//if(b>a)
	//{
	//	tem = a;
	//	a = b;
	//	b = tem;
	//}
	//printf("%d>%d>%d\n",a,b,c);


	//int a;
	//scanf("%d",&a);
	//switch(a)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("是工作日\n");
	//	break;
	//default:
	//	printf("输入错误\n");
	//}

	int a = 0;
	int x,y,z;
	for(a=100;a<1000;a++)
	{
		x = a%10;
		y = (a/10)%10;
		z = a/100;
		if(a==x*x*x+y*y*y+z*z*z)
			printf("%d\n",a);
	
	}




	/*int a;
	for(a=2000;a<=3200;a++)
	{
		if(a%7 == 0 && a%5 != 0)
			printf("%d\n",a);	
	}*/
}