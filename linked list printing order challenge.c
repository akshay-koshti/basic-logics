#include <stdio.h>
#include <stdlib.h>

struct node{
char data;
struct node *next;
};

struct node* create(char ch){
struct node *start=malloc(sizeof(struct node));
start->next=NULL;
start->data=ch;
return start;
}

void fun(struct node *start){
if(start == NULL) return;
printf("%c ", start->data);
if(start->next != NULL)
fun(start->next->next);
printf("%c ", start->data);
}

main(){
struct node *start;
start=create('i');
start->next=create('i');
start->next->next=create('t');
start->next->next->next=create('k');
start->next->next->next->next=create('g');
start->next->next->next->next->next=create('p');
fun(start);
free(start->next->next->next->next->next);
free(start->next->next->next->next);
free(start->next->next->next);
free(start->next->next);
free(start->next);
free(start);
return 0;
}