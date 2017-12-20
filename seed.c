#include<stdio.h>
int main()
{
    int num,a,mul;
    scanf("%d",&num);
    mul=num;
    while(num!=0)
    {
        a=num%10;
        mul=mul*a;
        num=num/10;
    }
    printf("%d",mul);
    return 0;
}
