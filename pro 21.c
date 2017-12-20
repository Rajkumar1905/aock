#include<stdio.h>
int main()
{
	int a[100],i=0,j=0,k=0,n=0,count=0,p=0,q=0,sum=0,r=0,s,cout=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	p=sum;
	sum=0;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<=i;j++)
		{
			count++;
			q=q+a[j];
		}
		k=q/count;
		r=p-q;
		s=r/(n-count);
		if(s==k)
		{
			printf("[");
			for(j=0;j<count;j++)
			{
				printf("%d ",a[j]);	
			}
			printf("]\n");
			printf("[");
			for(j=count;j<n;j++)
			{
				printf("%d ",a[j]);	
			}
			printf("]");
			break;	
		}
		count=0;
		sum=0;	
		q=0;		
	}
	
return 0;
}
