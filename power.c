#include<stdio.h>
int main()
{
	int b,p,sum=1,i;
	scanf("%d %d",&b,&p);
	for(i=1;i<=p;i++)
	{
		sum=sum*b;
	}
	printf("%d",sum);
	return 0;
}
