#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
}*start=NULL,*new1,*temp;
void create();
void recreate();
void insert_beginnig();
void display();
void main()
{
    int choice;
    char ch;
    do
    {
        clrscr();
        printf("------menu------\n");
        printf("\n 1= create()");
        printf("\n 2= insert_at_beginning()");
        printf("\n 3= display()");
        printf("\n enter your choice:-");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
            break;
            case 2: insert_beginning();
            break;
            case 3: display();
            break;
            default:
            printf("\n you have entered a wrong choice.");
        }
        printf("\n Do you want to continue(y/n)");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    getch();
}
void create()
{
    new1=(struct list*)malloc(sizeof(struct list));
    printf("\n enter a element to be insertec:-");
    scanf("%d",&new1->data);
    new1->next=NULL;
    start=new1;
}
void display()
{
    if(start==NULL)
    {
        printf("\n list is empty");
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
void recreate()
{
    new1=(struct list*)malloc(sizeof(struct list));
    printf("\n enter a element to be insertec:-");
    scanf("%d",&new1->data);
    new1->next=NULL; 
}
void insert_beginning()
{
    recreate();
    if(start==NULL)
    {
        start=new1;
    }
    else if(start->next=NULL)
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