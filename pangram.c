#include<stdio.h>
int main()
{
    char a[100];
    int i=0,j=0,k=0,n=0,count=0,space=0,cout=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    for(i='a';i<='z';i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]==i)
            {
                count++;
            }
        }
        if(count>=1)
        {
            n++;
        }
        else
        {
            n--;
        }
        count=0;
    }
    if(n==26)
    {
        printf("pangram");
    }
    else
    {
        printf("not a pangram");
    }
    return 0;
}
