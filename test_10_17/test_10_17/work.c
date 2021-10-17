#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	/*for(i=1;i<=5;i++)
		sum+=i;*/
	do
	{
		sum+=i;
		i+=1;
	}
	while(i<=5);
	printf("%d\n",sum);
	return 0;
}
