#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n,r,b;
printf("enter the order of the paturn:");
scanf("%d",&n);
printf("\n\n\n\n");
for(r=1;r<=3;r++)
{
for(b=1;b<=6*n+1&&r==1;b++)
{
	printf("*");
}
if(r==1)
printf("\n");
for(i=1;i<=n;i++)
{
printf("* ");
for(j=n-1;j>=i;j--)
{
printf(" ");
}
for(k=i;k>=1;k--)
{
printf("* ");
}
for(j=i;j<n&&r==2;j++)
{
printf(" ");
}
for(j=2*n-2*i;j>=1&&r!=2;j--)
{
printf(" ");
}
for(k=i;k>=1&&r!=2;k--)
{
printf("* ");
}
for(k=1;k<=2*n-1&&r==2;k++)
{
	printf("*");
}
for(j=i;j<=n&&r==2;j++)
{
printf(" ");
}
for(j=2*n-2*i;j>=1&&r!=2;j--)
{
printf(" ");
}
for(k=i;k>=1;k--)
{
printf("* ");
}
printf("     **\n");
}
printf("\n");
}
for(b=1;b<=6*n+10;b++)
{
	printf("*");
}
getch();
return 0;
}
