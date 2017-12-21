#include<stdio.h>
int main()
{
    int n,i,j,k=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        for(k=0;k<2*i-1;k++)
        {
            printf(" ");
        }
        if(i==0)
        {
            for(t=n-1;t>i;t--)
            {
                printf("*");
            }
        }
        else
        {
         for(t=n;t>i;t--)
            {
             printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
