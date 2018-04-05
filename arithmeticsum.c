#include<stdio.h>
int main()
{
int N,A,D,i,sum=0,k=0;
scanf("%d%d%d",&N,&A,&D);
for(i=0;i<N;i++)
{
sum=sum+A+k;
k=k+D;
}
printf("%d",sum);
return 0;
}
