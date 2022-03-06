#include<stdio.h>
void main()
{
	int i,j,c1,c2;
	char str[20];
	printf("enter string:\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	for(j=0;j<i;j++)
	{
		if(isdigit(str[j]))
		c1=1;
		if(isalpha(str[j]))
		c2=1;
		}
		if(c1==c2==1)
		printf("yes");
		else
		printf("no");
		}
