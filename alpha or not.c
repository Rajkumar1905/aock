#include<stdio.h>
int main()
{
	char a;
	printf("enter the string : ");
	scanf("%s",&a);
	if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	{
		printf("Alphapet");
	}
	else
	{
		printf("not an alphapet");
	}
	return 0;
}
