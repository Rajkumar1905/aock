#include<stdio.h>
int main()
{
	int n;
	printf("enter the year : ");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				printf("leap");
			}
			else
			{
			printf("not a leap");
			}
		}
		else
		{
			printf("leap");
		}
	}
	else
	{
		printf("not a leap");
	}
	return 0;
}
