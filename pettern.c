#include<stdio.h>
void main()
{
int order,i,row,coll;
printf("enter order: ");
scanf("%d",&order);
printf("enterr rows: ");
scanf("%d",&row);
printf("enter collum: ");
scanf("%d",&coll);
system("cls");
printf("\n\n\n\n\n");
print_square(order,row,coll);
print_line((order*2+2)*coll+1,'*');
}
void print_square(int o,int row,int coll){
int i,j,k;
for(j=1;j<=row;j++){
for(i=1;i<=o+3;i++){
for(k=1;k<=coll;k++){
printf("*");
if(i==1)
print_line((o*2)+1,'*');
if(i==2||i==o+3)
print_line((o*2)+1,' ');
if(i>2&&i!=o+3){
print_line(o+3-i,' ');
print_starspace(i-2);
print_line(o+2-i,' ');
}
}
printf("*\n");
}}}
void print_line(int x,char ch){
int i;
for(i=1;i<=x;i++){
printf("%c",ch);
}}
void print_starspace(int x){
int i;
for(i=1;i<=x;i++){
printf("* ");
}}