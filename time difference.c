#include<stdio.h>
int main()
{
    int i,a,b;
    double l,u,min1,min2,diff;
    scanf("%lf %lf",&l,&u);
    a=l;
    b=u;
    min1=l-a;
    min2=u-b;
    a=a*60;
    b=b*60;
    min1=min1*100;
    min2=min2*100;
    diff=a+min1-b-min2;
    if(diff<0)
    {
    printf("%.0lf mins",-(diff));
    }
    else
    {
        printf("%.0lf mins",diff);
    }
    return 0;
}
