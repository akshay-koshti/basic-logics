#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int l,m,n;
	puts("enter the string:");
	gets(str);
	printf("%d\n",strlen(str));
	l=0;m=1;
	for(;str[m]!='\0';m++)
	{
		for(;str[l]==str[l+1];l++);
		l++;
		str[m]=str[l];
	}
	puts(str);
	}
