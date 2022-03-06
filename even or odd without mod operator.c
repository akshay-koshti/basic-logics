#include<conio.h>
#include<stdio.h>
void main()
{
int n,a,b;
printf("enter number: ");
scanf("%d",&n);
a=n&1;
if(n&1)
printf("odd");
else
printf("even");
getch();
}
