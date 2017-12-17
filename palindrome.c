#include<stdio.h>
int main()
{
	int a,n,b,sum=0;
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		b=a%10;
		sum=sum*10+b;
		a=a/10;
	}
	if(n==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
	
}
