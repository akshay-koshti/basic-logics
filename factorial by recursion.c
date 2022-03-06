#include<stdio.h>
int n,f,temp;
void main()
{
printf("enter the number: ");
scanf("%d",&n);
f=fact(n);
printf("the factorial is: %d",f);
}
int fact(int x)
{
if(x!=1){
temp=x*fact(x-1);
return temp;
}}
