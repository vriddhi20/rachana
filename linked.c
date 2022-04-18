#include<stdio.h>
#include<stdlib.h>
typedef struct Node *lstptr;
struct Node
{
   int data;
   lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
  lstptr node;
  node=(lstptr)malloc(sizeof(struct Node));
  return node;
}
void insertBegin(int ele)
{
  lstptr new;
  new=getnode();
  new->data=ele;
  new->link=NULL;
  if(first!=NULL)
     new->link=first;
   first=new;
 } 
void insertEnd(int ele)
{
  lstptr new,temp;
  new=getnode();
  new->data=ele;
  new->link=NULL;
  if(first!=NULL)
  {

   temp=first;
   while(temp->link!=NULL)
   temp=temp->link;
   temp->link=new;
  }
else
 first=new;
}

void display()
{
  lstptr temp;
  if(first==NULL)
  {
     printf("\nlist is empty");
     exit(0);
  }
  temp=first;
  while(temp->link!=NULL)
  {
  printf("%d\t",temp->data);
  temp=temp->link;
  }
  printf("%d\t",temp->data);
}
void deleteBegin()
{
  lstptr temp;
  if(first==NULL)
  {
    printf("\nlink is empty");
  }
 else
 {
 temp=first;
 if(first->link==NULL)
 first=NULL;
 else
 first=first->link;
 free(temp);
}
}
void deleteEnd()
{
  lstptr temp,prev;
  if(first==NULL)
  {
     printf("\nlist is empty");
  }
else
{
  temp=first;
  if(first->link==NULL)
  first=NULL;
  else
  {
      prev=temp;
      while(temp->link!=NULL)
      {
        prev=temp;
        temp=temp->link;
     }
     prev->link=NULL;
  }
  free(temp);
}
}
void deleteSpecific(int key)
{
  lstptr temp,prev;
  if(first==NULL)
  {
    printf("List is empty\n");
    return;
  }
  temp=first;
  if(first->data==key)
  {
    if(first->link==NULL)
     first=NULL;
     else
     first=first->link;
  }
  else
  {
    while(temp->data!=key && temp->link!=NULL)
    {
      prev=temp;
      temp=temp->link;
    }
    if(temp->link==NULL && temp->data!=key)
    printf("Key not found\n");
    else if(temp->link!=NULL)
     prev->link=temp->link;
     else
      prev->link=NULL;
  }
  free(temp);
 }
void main()
{
int ch,ele,opt=1;
while(opt)
{
  printf("1.INSERT BEGIN\n,2.INSERT END\n,3.DELETE BEGIN\n,4.DELETE END\n,5.DELETE SPECIFIC\n,6.DISPLAY\n,7.Exit\n");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("enter the element");
           scanf("%d",&ele);
           insertBegin(ele);
           break;
  case 2:  printf("enter the element");
           scanf("%d",&ele);
           insertEnd(ele);
           break;
 case 3:   deleteBegin();
           break;
 case 4:   deleteEnd();
           break;
 case 5:   printf("enter the key element:");
           scanf("%d",&ele);
           deleteSpecific(ele);
           break;
  case 6:display();
         break;
  }
  printf("do you want to continue(0,1)");
  scanf("%d",&opt);
 }
}
