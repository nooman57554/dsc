#include<stdio.h>
#include<string.h>

void push(char item[],int *top,char s[20][20])
{
*top+=1;
strcpy(s[*top],item);

}

char *pop(int *top,char s[20][20])
{
char *item;
item=s[*top];
*top-=1;
return item;
}

void postoin(char postfix[],char infix[])
{
char symbol,s[20][20],temp[2],*op1,*op2;
int i,top;
top=-1;

for (i=0;i<strlen(postfix);i++)
{
symbol=postfix[i];
temp[0]=symbol;
temp[1]='\0';

switch(symbol)
{
case '+':
case '-':
case '*':
case '/':
case '$':
         
         op2=pop(&top,s);
         op1=pop(&top,s);
         strcpy(infix,"(");
         strcat(infix,op1);
         strcat(infix,temp);
         strcat(infix,op2);
         strcat(infix,")");
         push(infix,&top,s);
         break;
         default : push(temp,&top,s);
         break;
         }
   
 }
 }
void main()
{
char postfix[25],infix[25];

printf("enter the postfix expression\n");
scanf("%s",postfix);

postoin(postfix,infix);

printf("the equivalent infix expression is :%s\n",infix);
return;
}



        
