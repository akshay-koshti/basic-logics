#include<stdio.h>
void main()
{
	int i,n;
	char str[20];
	printf("enter the string:");
	scanf("%s",str);
	for(n=0;str[n]!='\0';n++);
	for(i=0;i<n/2;i++)
	{
		if(str[i]!=str[n-1-i])
		break;
		}
		if(i==n/2)
		printf("yes");
		else
		printf("no");
		}
		
