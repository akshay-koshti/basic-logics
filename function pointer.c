#include <stdio.h>
void show1();
void show2(void (*ptr)());

int main(){
void (*ptr1)()=&show1;
void (*ptr2)(show1)=&show2;
(*ptr2)(ptr1);

return 0;
}

void show1(){
printf("hello\n");
}

void show2(void (*ptr)()){
(*ptr)();
}