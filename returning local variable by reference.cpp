#include <iostream>
using namespace std;

int &fun() {
static int x = 10;
x *= 2;
return x;
}

int main() {
int i;
cin >> i;
fun()=i;//write the line hear
cout << fun();
return 0;
} // End of main()