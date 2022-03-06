#include<stdio.h>
void main()
{
	int a,b,c=0,i;
	printf("enter number: ");
	scanf("%d",&a);
	i=0;
	for(;a!=0;)
	{
		b=a%10;
		a/=10;
		c+=b<<i++;
	}printf("\nnum is %d",c);
	}
