#include<stdio.h>
int main()
{
    int i,j,k,t;
    char a[100];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            t=i;
        }
    }
    for(i=t+1;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf(" ");
    for(i=0;i<t;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
