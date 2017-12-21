#include<stdio.h>
int main()
{
    int a[100],i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        if(k==i)
        {
            printf("The number %d equals to the index %d",i,k);
        }
    }
    return 0;
}
