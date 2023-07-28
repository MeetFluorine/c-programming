#include<stdio.h>
#define N 5
void enqueue(int);
void dequeue();
void display();
int queue[N];
int rear=-1;
int front=-1;
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("queue is overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("queue is underflow");
    }
    else if(rear==front)
    {
        rear=front=-1;
    }
    else
    {
        front++;
    }
}
void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
int main()
{
    printf("inserted element of queue:-\n");
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    printf("after dequeue queue rest element are:-\n");
    dequeue();
    dequeue();
    display();
    return 0;
}