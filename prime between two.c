#include<stdio.h>
int main()
{
	int l,u,i,j,count=0;
	scanf("%d %d",&l,&u);
	for(i=l+1;i<=u;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		{
			count++;
		}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
		count=0;
	}
	return 0;
}
