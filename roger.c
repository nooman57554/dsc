#include<stdio.h>
#include<stdlib.h>
int n;
 int i,front,rear,ch,s[3],item;
void insert(),del(),dis(),exit();

void main()
{
front=0;
rear=-1;
ch=0;
printf("enter the size of the queue\n");
scanf("%d",&n);

while(ch!=4)
{
printf("\n--------MENU--------\n");
printf("1:insert\n2:del\n3:dis\n4:exit\n");
printf("enter your choice:\n");
scanf("%d",&ch);

switch(ch)
{
case 1:insert();break;
case 2:del();break;
case 3:dis();break;
case 4: exit(0);break;
default: printf("invalid choice\n");
}
}
return;
}

void insert()
{
int item;
if(rear==n-1)
{
printf("queue is overflow\n");
return;
}
printf("enter an item to be inserted: ");
scanf("%d",&item);
rear+=1;
s[rear]=item;
}

void del()
{
if(front>rear)
{
printf("queue is empty\n");
return;
}
printf("item to be deleted is %d \n",s[front++]);
}

void dis()
{
if(front>rear)
{
printf("queue is empty\n");
return;
}
printf("\n queue contains.........\n");
for(i=front;i<=rear;i++)
printf("%d\t",s[i]);
}



