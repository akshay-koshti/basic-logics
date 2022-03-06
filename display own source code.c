#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen(__FILE__,"r");
if(fp==NULL)
{
printf("file not found.");
getch();
exit(0);
}
while(ch!=EOF)
{
ch=fgetc(fp);
putchar(ch);
}
getch();
}
