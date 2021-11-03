#include <stdio.h>
void main()
{
	/*int a,b=3;
	int x=1,y=1;
	long long sum=0;
	printf("ÇëÊäÈë>>");
	scanf("%d",&a);
	if(a<=2)
		{
			printf("1\n");
		}
	else if(a>=3)
	{
		while(b<=a)
		{
			sum = x+y;
			x = y;
			y = sum;
			b++;
		}	
		printf("%d\n",sum);
	}*/
	int arr[] = {7,3,1,9,5};
	int a,b,c,d;
	d = sizeof(arr)/sizeof(arr[0]);
	for(b=1;b<=d;b++)
	{
		for(a=0;a<=d-2;a++)
		{
			if(arr[a]<arr[a+1])
				continue;
			if(arr[a]>arr[a+1])
			{
				c = arr[a]^arr[a+1];
				arr[a+1] = c^arr[a+1];
				arr[a] = c^arr[a+1];
			}
		
		}
	}
		for(a=0;a<=d-1;a++)
		{
			printf("%d ",arr[a]);
		}

	}





