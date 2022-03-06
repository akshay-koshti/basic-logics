#include<stdio.h>
void main()
{
	int a,b,i;
	printf("enter the number and the diviser :\n");
	scanf("%d%d",&a,&b);
	int temp=0;
	for(i=0;;i++)
	{
		temp+=b;
		if(temp>a)
		break;
	}
printf("answer:%d",i);
}
