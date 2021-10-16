//#include <stdio.h>
//int Fac(int a)
//{
//	if(a<=1)
//		return 1;
//	else
//		return a*Fac(a-1);
//}
//
//
//void main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	a = Fac(a);
//	printf("ret=%d\n",a);
//}
#include <stdio.h>
int Fib(int x)
{
	if(x<=2)
		return 1;
	else
		return Fib(x-1)+Fib(x-2);
}
void main()
{
	int a = 0;
	int ret = 0;
	scanf("%d",&a);
	ret = Fib(a);
	printf("Fib=%d\n",ret);
}