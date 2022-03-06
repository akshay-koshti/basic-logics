#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
int i=1, m, n, loop=1, order=2, temp=2, num;
printf( "enter a number: " );
scanf( "%d", &num );

while(1)
if( num<=i*i ) break;
else ++i;

int *a = (int*) malloc( sizeof(int)*i*i );
for( m=0; m<i; m++ ){
for( n=0; n<i; n++ ){
a[i*m+n]=0;
}}

if( i%2 == 0 ) m=i/2, n=m-1;
else m=n=i/2;

a[i*m+n] = 1;
while( temp<=num ){
++n;
while( loop<=order && temp<=num ){
a[i*m+n]=temp++;
if( loop!=order ) --m;
++loop;
}
loop=1;

while( loop<=order && temp<=num ){
--n;
a[i*m+n]=temp++;
++loop;
}
loop=1;

while( loop<=order && temp<=num ){
++m;
a[i*m+n]=temp++;
++loop;
}
loop=1;

while( loop<=order && temp<=num ){
++n;
a[i*m+n]=temp++;
++loop;
}
loop=1;

order+=2;
}

for( m=0; m<i; m++ ){
for( n=0; n<i; n++ ){
printf( "%02d ", a[i*m+n] );
}
printf( "\n" );
}

free(a);
getch();
return 0;
}
