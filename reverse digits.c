#include<stdio.h>
int main()
{
	int n,i,a,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
