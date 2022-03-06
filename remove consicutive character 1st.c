#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,k,n;
	puts("enter string:");
	gets(str);
	n=strlen(str);
	for(i=1;i<n;i++)
	{
	if(str[i]==str[i-1])
		{
			for(k=i;k<n;k++)
			{
				str[k]=str[k+1];
			}
			--n;
			i=0;
		}
	}
	puts("string is ");
	puts(str);
}
