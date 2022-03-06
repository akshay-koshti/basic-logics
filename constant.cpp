#include <iostream>
using namespace std;
int main(){
const int x=100;
int *ptr;
ptr=(int*)&x;
*ptr=300;
cout << *ptr << " " << x;
if(ptr == &x)
cout << "\nyes";
return 0;
}