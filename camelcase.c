#include<stdio.h>
int main()
{
    char a[100];
    int i,j=0,k[100];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        {
            if(a[i]>='a' && a[i]<='z')
            {
            a[i]=a[i]-32;
            }
        }
        else
        {
            if(a[i]==' ')
            {
                k[j]=i+1;
                j++;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
            a[i]=a[i]+32;
            }
        }
    }
    for(i=0;a[i]!='\0';i++,j=0)
    {
        
        if(k[j]==i)
        {
            if(a[i]>='a' && a[i]<='z')
            {
            a[i]=a[i]-32;
            }
        }
        j++;
    }
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf("");
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
