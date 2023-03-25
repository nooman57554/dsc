#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
 };
 int main()
 {
  int x;
  printf("enter the element to be inserted at the beginging: \n");
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
 printf("/n the list before insertring at begining is:\n");
 
 while(p1!=NULL)
 {
 printf("%d\t",p1->data);
 p1=p1->link;
 }
 printf("\n");
 

 struct node *p2=malloc(sizeof(struct node));
 p2->data=x;
 p2->link=NULL;
 
 p2->link=head;
 
 
 printf("/n the list after insertring at begining is:\n");
 while(p2!=NULL)
 {
 printf("%d\t",p2->data);
 p2=p2->link;
 }
 return 0;
 }
 
