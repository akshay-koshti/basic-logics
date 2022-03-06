#include <stdio.h>
#include <conio.h>

int main(){
int n1, n2, sum=0, cin=0, i=0;
float weight=0.1;
printf("Enter 2 binary numbers:\n");
scanf("%d%d", &n1, &n2);
while(n1 != 0 || n2 != 0){
int a=n1%10, b=n2%10;
weight=weight*10;
sum = sum + (a^b^cin)*weight;
cin = a*b || b*cin || cin*a;
n1=n1/10, n2=n2/10;
}
sum = sum + cin*weight*10;
printf("%d", sum);
getch();
return 0;
}