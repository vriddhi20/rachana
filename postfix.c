#include<stdio.h>
#include<ctype.h>
#define MAXSTACK 100
#define POSTFIXSIZE 100
int stack[MAXSTACK];
int top=-1;
void push(int item)
{
  if(top>=MAXSTACK-1)
  {
    printf("stackover flow");
    return;
  }
  else
  {
    top=top+1;
    stack[top]=item;
  }
}
int pop()
{
  int item;
  if(top<0)
  {
    printf("stack under flow");
  }
 else
 {
   item=stack[top];
   top=top-1;
   return item;
  }
}
void EvalPostfix(char postfix[])
{
  int i;
  char ch;
  int val;
  int op1,op2;
  for(i=0;postfix[i]!=')';i++)
  {
    ch=postfix[i];
    if(isdigit(ch))
    {
      push(ch-'0');
    }
    else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
    {
      op1=pop();
      op2=pop();
      switch(ch)
      {
        case'*':
          val=op2*op1;
          break;
       case '/':
          val=op2/op1;
          break;
       case '+':
          val=op2+op1;
          break;
       case'-':
          val=op2-op1;
           break;
     }
     push(val);
   }
 }
 printf("\n result of expression evaluation:%d\n",pop());
}
int main()
{
  int i;
  char postfix[POSTFIXSIZE];
  printf("assumption: there are only four operators(*,/,+,-)in an expression and operand is single digit only.\n");
  printf("\n enter postfix expression,\npress right parenthesis ')' for end expression:");
  for(i=0;i<=POSTFIXSIZE-1;i++)
  {
    scanf("%c",&postfix[i]);
    if(postfix[i]==')')
    {
      break;
    }
  }
  EvalPostfix(postfix);
  return 0;
}
