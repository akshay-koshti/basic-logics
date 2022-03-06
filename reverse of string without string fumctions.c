#include<stdio.h>
void main()
{
	int i,n;
	char str1[20],str2[20];
	printf("enterr the string:");
	scanf("%s",str1);
	for(n=0;str1[n]!='\0';n++);
	for(i=0;i<n;i++)
	{
		str2[i]=str1[n-1-i];
		}
		str2[n]='\0';
printf("%s",str2);
		}
