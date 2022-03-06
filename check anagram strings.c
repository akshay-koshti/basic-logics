#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str1[30],str2[30],ch;
int l1,l2,i,t;
x:
puts("enter first string:");
gets(str1);
puts("enter second string:");
gets(str2);
l1=strlen(str1);l2=strlen(str2);
if(l1==l2){
for(i=0;i<l1;i++){
ch=str1[i];
int c1=0,c2=0;
for(t=0;t<l1;t++){
if(str1[t]==ch)c1++;
if(str2[t]==ch)c2++;
}
printf("%d %d\n",c1,c2);
if(c1!=c2)break;
}
if(i==l1)printf("yes");
else
printf("no");
}
else
printf("no");
getch();
goto x;
return 0;
}