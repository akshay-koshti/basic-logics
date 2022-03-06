#include <stdio.h>
int main()
{
int n;
x:
printf( "enter: " );
scanf( "%d", &n );
while( !(n%2) && !printf( "even\n" ) );
while( (n%2) && !printf( "odd\n" ) );
goto x;
return 0;
}