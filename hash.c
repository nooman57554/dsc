#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
int key;
char name[20];
};

struct employee emp_array[100];

int hash(int key,int m)
{
return key%m;
}

void create_ht(int ht[],int m)
{
for(int i=0;i<m;i++)
{
ht[i]=-1;
}
}

void insert(int key , char name[],int ht[],int m)
{
int index=hash(key,m);
while(ht[index]!=-1)
{
index=(index+1)%m;
}
emp_array[index].key=key;
strcpy(emp_array[index].name,name);
ht[index]=1;
}

void display(char name[],int key,int m)
{
printf("\nhash table...\n");
printf("\nINDEX\tEMP ID\tEMP NAME");
for(int i=0;i<m;i++)
{
printf("\n%d\t%d\t%s",i,emp_array[i].key,emp_array[i].name);
}
printf("\n");
}

int main()
{
int i,n,m,key;
char name[20];
int age;
int ht[200];
printf("enter the number of employees: ");
scanf("%d",&n);
printf("enter the size of the table: ");
scanf("%d",&m);
create_ht(ht,m);
printf("enter the employee records:\n");
for(i=0;i<n;i++)
{
printf("employees %d:\n",i+1);
printf("enter key(4-digit) as emp id: ");
scanf("%d",&key);
printf("enter name: ");
scanf("%s",name);
insert(key,name,ht,m);
}
display(name,key,m);
return 0;
}

