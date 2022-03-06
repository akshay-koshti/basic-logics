#include<stdio.h>
void main()
{
	int a,b;
	printf("numbers :\n");
	scanf("%d%d",&a,&b);
	for(;b--;a++);
	printf("sum is %d",a);
	}
