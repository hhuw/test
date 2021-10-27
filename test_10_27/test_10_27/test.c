#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct s
{
	int x;
	char z;
	char a[];
};
void main()
{
	////int a[10] = {0};
	////int* b = a+1;

	////printf("%p\n",b);
	////printf("%p\n",c);
	//struct s arr = {10};
	//struct s* p = &arr;
	//printf("%d\n",arr.x);
	//printf("%d\n",p->x);
	int* arr[10] = {NULL};
	struct s a = {};

}