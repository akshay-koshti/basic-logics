#include<stdio.h>
void main()
{
	int n,i,j,a;
for(n=1;n<=100000;n++)
{
for(i=1,a=0;i<n;i++)
	{
		if(n%i==0)
		a+=i;
		}
		if(a==n)
		printf("%d\n",n);
}}
