#include<stdio.h>
int main()
{
	int a,n,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		count++;
		n=n/10;
	}
	printf("\n%d",count);
	return 0;
}
