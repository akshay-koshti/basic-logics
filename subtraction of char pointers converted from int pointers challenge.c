#include <stdio.h>
Main(int x){
int num[]={1, 2, 3, 4, 5, 6};
int *p1, *p2;
p1=num;
p2=p1+5;
printf("%d", (char *)p2-(char *)p1);
return 0;
}
main(){
void (*ptr)()=&Main;
(*ptr)(0);
return 0;
}