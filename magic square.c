#include<stdio.h>
int main()
{
int n;
printf("enter the number : ");
scanf("%d",&n);
magic_square(n);
return 0;
}
void magic_square(int x)
{
int ar[4][4]={0},i,j;
for(i=0;i<4;i++){
for(j=0;j<4;j++){
ar[i][j]=x;
++x;
}}
for(i=1;i<=2;i++){
int t;
t=ar[0][i],ar[0][i]=ar[3][3-i],ar[3][3-i]=t;
t=ar[i][0],ar[i][0]=ar[3-i][3],ar[3-i][3]=t;
}

for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%02d ",ar[i][j]);
}
printf("\n");
}

}