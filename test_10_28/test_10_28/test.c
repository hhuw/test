#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int i,b,k=0;
	for(i=0;i<=5;i++)
	{
		b=i%2;
		while(b-->=0)
			k++;
	}
	printf("%d %d\n",k,b);
}