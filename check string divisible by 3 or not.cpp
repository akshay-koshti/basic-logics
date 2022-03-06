#include <iostream>
using namespace std;

int check( char str[] ){
int even=0, odd=0, i=0;
while( str[i] != NULL ){
if( (int) str[i] == 49 ){
if( i % 2 ==1 )
odd++;
else
even++;
}
++i;
}
if( (odd-even) % 3 == 0 )
return 1;
else
return 0;
}

int main()
{
char str[] = "1111111111";
if( check( str ) )
cout << "yes";
else
cout << "no";
return 0;
}
