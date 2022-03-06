#include <stdio.h>
int main()
{
int a = 13, b =17;
b = (a+b) - (a=b);
printf( "%d %d", a, b );
return 0;
}