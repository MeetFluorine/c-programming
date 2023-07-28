#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
  int data;
  struct list *next;
}*start=NULL,*new1,*temp,*temp1;
void create();
void recreate();
void insertbig();
void insertend();
void display();
int count_node();
void insert_sp_position();
void deletebig();
void deleteend();
void delete_sp_position();
void main()
{
  int choice;
  char ch;
  do
  {
     printf("\n 1= create");
     printf("\n 2= insert at biginning");
     printf("\n 3= insert at end");
     printf("\n 4= insert at specific position");
     printf("\n 5= display");
     printf("\n 6= delete from biginning");
     printf("\n 7= delete from end");
     printf("\n 8= delete from  specific position");
     printf("\n enter your choice:-");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:create();
	break;
	case 2:insertbig();
	break;
	case 3:insertend();
	break;
	case 4:insert_sp_position();
	break;
	case 5:display();
	break;
	case 6:deletebig();
	break;
	case 7:deleteend();
	break;
	case 8:delete_sp_position();
	break;
	default:
	printf("\nyou have entered a wrong choice:-");
     } printf("\n do you want to continue(y/n):-");
     scanf(" %c",&ch);
  }while(ch=='y'|| ch=='Y');
  getch();
}
void create()
{
  new1=(struct list*)malloc(sizeof(struct list));
  printf("enter element to be inserted:-");
  scanf("%d",&new1->data);
  new1->next=NULL;
  start=new1;
}
void recreate()
{
  new1=(struct list*)malloc(sizeof(struct list));
  printf("enter element to be inserted:-");
  scanf("%d",&new1->data);
  new1->next=NULL;
}
void insertbig()
{
  recreate();
  if(start==NULL)
  {
    start=new1;
  }
  else if(start->next==NULL)
  {
    new1->next=start;
    start=new1;
  }
  else
  {
    new1->next=start;
    start=new1;
  }
}
void insertend()
{
  recreate();
  if(start==NULL)
  {
    start=new1;
  }
  else if(start->next==NULL)
  {
    start->next=new1;
  }
  else
  {
    temp=start;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=new1;
  }
}
void display()
{
  if(start==NULL)
  {
    printf("\nno node found");
  }
  else
  {
    temp=start;
    while(temp!=NULL)
    {
      printf("%d\t",temp->data);
      temp=temp->next;
    }
  }
}
void insert_sp_position()
{
  int i=1,count,pos;
  count=count_node();
  printf("\n enter a position where you want to insert:-");
  scanf("%d",&pos);
  if(pos<0||pos>count+1)
  {
     printf("\n enter a positon from 1 to %d",count);
  }
  else if(pos==1)
  {
    insertbig();
  }
  else if(pos==count+1)
  {
     insertend();
  }
  else
  {
     recreate();
     temp=start;
     while(i<pos-1)
     {
	temp=temp->next;
	i++;
     }
     new1->next=temp->next;
     temp->next=new1;
  }
}
int count_node()
{
   int count=0;
  if(start==NULL)
  {
     count=0;
  }
  else
  {
    temp=start;
    while(temp!=NULL)
    {
       count++;
       temp=temp->next;
    }
  printf("\n%d node present in the list\n",count);
  return (count);
  }
}
void deletebig()
{
  if(start==NULL)
  {
     printf("\n no node found");
  }
  else  if(start->next==NULL)
  {
     printf("\n %d is deleted",start->data);
     free(start);
     start=NULL;
  }
  else
  {
    temp=start;
    start=start->next;
    printf("\n %d is deleted",temp->data);
    free(temp);
  }
}
void deleteend()
{
  if(start==NULL)
  {
     printf("\n no node found");
  }
  else  if(start->next==NULL)
  {
     printf("\n %d is deleted",start->data);
     free(start);
     start=NULL;
  }
  else
  {
    temp=start->next;
    temp1=start;
    while(temp->next!=NULL)
    {
       temp=temp->next;
       temp1=temp1->next;
    }
    temp1->next=NULL;
    printf("\n %d is deleted",temp->data);
    free(temp);
  }
}
void delete_sp_position()
{
   int i=1,count,pos;
   count=count_node();
   printf("\n enter a position that you want to delete:-");
   scanf("%d",&pos);
   if(pos<0||pos>count+1)
   {
     printf("\n enter position from 1 to %d",count);
   }
   else if(pos==1)
   {
     deletebig();
   }
   else if(pos==count)
   {
     deleteend();
   }
   else
   {
      temp=start->next;
      temp1=start;
      while(i<pos-1)
      {
	temp=temp->next;
	temp1=temp1->next;
	i++;
      }
      temp1->next=temp->next;
      printf("\n %d is deleted",temp->data);
      free(temp);
   }
}