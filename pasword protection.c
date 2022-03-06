#include<stdio.h>
#include<conio.h>
int main()
{
int p,sp=1234,np,i=0;
char enter;
printf("\t\t\t\t\tPASSWORD PROTECTION WINDOW\n");
printf("Hi\nyou have to enter the pasword to use this software\n");
a:
printf("please enter the password---\n");
scanf("%d",&p);
for(i=0;p!=sp&&i<=1;i++)
{
printf("*wrong password!!!* \n tryagain \n please enter the password---\n");
scanf("%d",&p);
}
if(i==2&&p!=sp)
{
printf("\n oops!!!\n you have crossed the the limit to enter the password.\n hit enter to finish or type + to reset your password");
fflush(stdin);
scanf("%c",&enter);
system("cls");
printf("\t\t\t\t\tPassword reset window\n");
switch(enter)
{
case '+':
b:
printf("enter new password-");
scanf("%d",&np);
printf("confirm new password-");
scanf("%d",&sp);
if(np==sp)
{
printf("success \n password reset successfully ");
goto a;
}
else
{
printf("the passwords you have entered does not match\n");
goto b;
}
}
}
else
{
system("cls");
printf("hello you are here \n");
}
getch();
return 0;
}
