#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
 };
 int main()
 {
  struct node *next,*prev;
  int x,c;
  c=1;
  printf("enter the element to be inserted at the last: \n");
  scanf("%d",&x);
  
 struct node *head=malloc(sizeof(struct node));
 head->data=30;
 head->link=NULL;
 
 struct node *p1=malloc(sizeof(struct node));
 p1->data=40;
 p1->link=NULL;
 
 p1->link=head;
 head=p1;
 
 p1=head;
 printf("\n the list before insertring at last is:\n");
 
 while(p1!=NULL)
 {
 printf("%d\t",p1->data);
 p1=p1->link;
 }
 printf("\n");
 

 struct node *p2=malloc(sizeof(struct node));
 p2->data=x;
 p2->link=NULL;
 p1=head;
 while(p1!=NULL)
 {
 next=p1;
 while(c<3)
 {
 prev=next;
 next=prev->link;
 c++;
 p2->link=prev->link;
 prev->link=p2;
 }
 }
 
 p1=head;
 printf("\n the list after insertring at last is:\n");
 while(p1!=NULL)
 {
 printf("%d\t",p1->data);
 p1=p1->link;
 }
 return 0;
 }
 
