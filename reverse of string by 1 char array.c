#include<stdio.h>
void main()
{
	char str[20],ch;
	int i,n;
	printf("enter a string: ");
	scanf("%s",str);
	for(n=0;str[n]!='\0';n++);
	for(i=0;i<n/2;i++)
	{
		ch=str[i],str[i]=str[n-1-i],str[n-1-i]=ch;
		}
		printf("%s",str);
		}
