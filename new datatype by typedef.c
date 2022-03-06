#include <stdio.h>
main(){
typedef int x[2];
x myarray[3]={1, 2, 3, 4};
printf("%u", sizeof(myarray));
printf(" %d", myarray[1][1]);
return 0;
}