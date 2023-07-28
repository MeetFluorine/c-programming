#include<stdio.h>
#define n 5
int queue[n];
int rear=-1;
int front=-1;
void enqueue();
void dequeue();
int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n press 1 for enqueue");
        printf("\n press 2 for dequeue");
        printf("\n press 3 for display");
        printf("\n enter your choice:-");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: enqueue();
            break;
        case 2: dequeue();
            break;
        case 3: display();
            break;
        default:
            printf("\n invalid choice!! press valid choice:-");
            break;
        }
        printf("\n Do you want to continue(y/n):-");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch=='y'|| ch=='Y');
    return 0;
}
void enqueue()
{
    int item;
    if((rear+1)%n==front)
    {
        printf("\n queue is overflow");
    }
    else if(front==-1 && rear==-1)
    {
        printf("\n enter data to be insert:-");
        scanf("%d",&item);
        front=rear=0;
        queue[rear]=item;
    }
    else
    {
        rear= rear+1;
        printf("\n enter data to be insert:-");
        scanf("%d",&item);
        queue[rear]=item;
    }
}
void dequeue()
{
    int item;
    if(front==-1 && rear==-1)
    {
        printf("\n queue is underdlow");
    }
    else if(front==rear)
    {
        item=queue[front];
        front=rear=-1;
        printf("\n %d is deleted from queue",item);
    }
    else
    {
        item =queue[front];
        front = front-1;
        printf("\n %d is deleted from queue",item);
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue is underflow");
    }
    else
    {
        printf("queue element are given below:-\n");
        for(i=front ; i<=rear ; i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}