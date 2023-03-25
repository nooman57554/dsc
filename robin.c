#include<stdio.h>
#include<malloc.h>

struct node
{
int value;
struct node *next;
};

int main()
{
int item ,n ;
struct node *head,*tail,*temp,*prev,*current,*next;

printf("enter the size of list\n");
scanf("%d",&n);
printf("enter the list to be reversed\n ");
temp=(struct node *)malloc(sizeof(struct node));
scanf("%d",&item);
temp->value=item;
head=temp;
n--;

while(n!=0)
{
temp->next=(struct node *)malloc(sizeof(struct node));
temp=temp->next;
scanf("%d",&item);
temp->value=item;
--n;
}

temp->next=NULL;
tail=temp;
temp=head;

while(temp!=NULL)
{
printf("%d\t",temp->value);
temp=temp->next;
}


printf("\nreversing the linked list\n");
prev=NULL;
current=next=head;

while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
temp=tail;

while(temp!=NULL)
{
printf("%d\t",temp->value);
temp=temp->next;
}
return 0;
}


