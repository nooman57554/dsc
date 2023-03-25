#include<stdio.h>
#include<ctype.h>
int stack[25],top=-1;
void push(int num);
int pop();
int eval_postfix();
void main()
{
char postfix[25];
int i=0,value[20],result;
printf("enter a valid postfix expression\n");
scanf("%s",postfix);
while(postfix[i]!='\0')
{
if(isalpha(postfix[i]))
{
printf("enter the value %c\n",postfix[i]);
scanf("%d",&value[i]);
}
i++;
}
result=eval_postfix(postfix,value);
printf("the result of %s=%d\n",postfix,result);
}

int eval_postfix(char postfix[],int data[])
{
int i=0,op1,op2,res;
char ch;
while(postfix[i]!='\0')
{
ch=postfix[i];
if(isalpha(ch))
push(data[i]);
else
{
op2=pop();
op1=pop();
switch(ch)
{
case '+' :push(op1+op2);
break;
case '-' :push(op1-op2);
break;
case '/' :push(op1/op2);
break;
case '*' :push(op1*op2);
break;
case '$' :push(op1^op2);
break;
}
}
i++;
}
res=pop();
return res;
}

void push(int num)
{
top+=1;
stack[top]=num;
return;
}

int pop()
{
int num;
num=stack[top--];
return num;
}

