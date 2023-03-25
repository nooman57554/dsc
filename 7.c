#include<stdio.h>
#include<stdlib.h>

struct node 
{
int data;
struct node *link;
};

struct node *first=NULL,*head ,*ptr,*temp,*temp1,*prev,*next;

void create()
{
head=(struct node *)malloc(sizeof(struct node));
printf("\n enter the data");
scanf("%d",&head->data);
head->link=NULL;
first=head;
}

void insert()
{
int i=1,pos;
next=head;
prev=head;
ptr=(struct node *)malloc(sizeof(struct node));
  printf("enter the data\n ");
  scanf("%d",&ptr->data);
printf("enter the positon at which node is to be inserted\n");
scanf("%d",&pos);
if(pos==1)
{
  ptr->link=head;
  head=ptr;
}

else
{

while(i<pos)
{
 prev=next;
 next=prev->link;
 i++;
}
 ptr->link=prev->link;
 prev->link=ptr;
}
}














void insertb()
{
ptr=(struct node *)malloc(sizeof(struct node));
 printf("enter the data\n");
 scanf("%d",&ptr->data);
 ptr->link=first;
 first=ptr;
}

void inserte()
{
ptr=first;
temp=(struct node *)malloc(sizeof(struct node));
printf("\nenter the data: ");
scanf("%d",&temp->data);
temp->link=NULL;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=temp;
}



void display()
{
head=first;
printf("\n the list contains...");
while(head!=NULL)
{
printf("\n %d",head->data);
head=head->link;
}
}

int main()
{
int ch;
printf("\n\n single linked list");
while(1)
{
printf("\n1.create\n2.insert a node \n3.delete a node \n ");

printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
display();
break;

case 2:insert();
display();break;



}
}
}


