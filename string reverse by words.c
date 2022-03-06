#include <stdio.h>

int main(){
char str1[50], str2[50];
int i, j=0, t, l;
gets(str1+1);
str1[0]=' ';
for(l=0; str1[l]!='\0'; l++);
for(i=l-1; i>=0; i--){
if(str1[i] == ' '){
t=i;
str1[t]='\0';
while(str1[++t] != '\0')
str2[j++]=str1[t];
str2[j++]=' ';
}}
str2[j]='\0';
puts(str2);
return 0;
}