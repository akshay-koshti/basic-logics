#include<stdio.h>
struct str{
int a:2;
int b:31;
int c:32;
};
int main()
{
struct str s;
printf("%d",sizeof(s));
return 0;
}
