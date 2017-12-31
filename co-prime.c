#include<stdio.h>
int main()
{
	int a,b,i,j,count=0,k;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		k=a;
		a=b;
		b=k;
	}
	for(i=1;i<=a;i++)
	{
		if(b>=i)
		{
		if(a%i==0 && b%i==0)
		{
			count++;
		}
	}
	}
	if(count==1)
	{
		printf("co-prime");
	}
	else
	{
		printf("not a co prime");
	}
	return 0;
}
