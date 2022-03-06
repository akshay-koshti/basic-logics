#include<string.h>
#include<stdio.h>
void main()
{
	char str1[100],str2[10];
	int i,j,m,n,temp,c=0;
	printf("enter main string:\n");
	gets(str1);
	printf("enter substring:\n");
	gets(str2);
	m=strlen(str1);n=strlen(str2);
	printf("%d %d\n",m,n);
			for(i=0;i<=m-n;i++)
	{
		temp=i;
		for(j=0;j<n;j++,i++)
		{
			if(str2[j]!=str1[i])
			break;
			}
			if(j==n)
			c++;
			i=temp;
		}
		if(c>0)
		printf("found %d times",c);
		else
		printf("not found");
		}
