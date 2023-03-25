#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
int priority;
int info;
struct node *link;
}node;

node *front=NULL;

void insert(int item,int priority)
{
node *tmp,*q;
tmp=(node *)malloc(sizeof(node));
tmp->info=item;
tmp->priority=priority;

if(front==NULL || priority<front->priority)
{
tmp->link=front;
front=tmp;
}

else
{
q=front;
while(q->link!=NULL && q->link->priority<=priority)
q=q->link;

tmp->link=q->link;
q->link=tmp;
}
}

void del()
{
 node *tmp;
 if(front==NULL)
 printf("queue underflow\n");
 
 else
 {
 tmp=front;
 printf("deleted item is %d\n",tmp->info);
 front=front->link;
 free(tmp);
 }
 }
 
 void display()
 {
 node *ptr;
 ptr=front;
 if(front==NULL)
 printf("queue is empty\n");
 
 else
 {
 printf("queue is : \n");
 printf("priority item\n");
 while(ptr!=NULL)
 {
 printf("%5d %5d \n",ptr->priority,ptr->info);
 ptr=ptr->link;
 }
 }
 }
 
 int main()
 {
 int choice,item,priority;
 do
 {
 printf("\n 1.insert \n2.delete \n3.display \n4.quit\n");
 printf("enter your choice: ");
 scanf("%d",&choice);
 
 switch(choice)
 {
 case 1 : printf("input the item value to be added in the queue: ");
 scanf("%d",&item);
 printf("\nenter its priority: ");
 scanf("%d",&priority);
 insert(item,priority);
 break;
 
 case 2:del();
 break;
 
 case 3:display();
 break;
 
 case 4:exit(0);
 break;
 
 default:printf("wrong choice\n");
 }
 }
 while(choice!=4);
 return 0;
 }
 
