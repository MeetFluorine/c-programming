#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *stack;
int n;
int top=-1;
int pop();
void push(int x);
//void display();
void main()
{
    int i,dec,rem;
    printf("\n enter the size of stack:-");
    scanf("%d",&n);
    stack=(int *)malloc(n*sizeof(int));
    printf("enter a decimal value:- ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem= dec%2;
        push(rem);
        dec=dec/2;
    }
    printf("%d",pop());
    getch();
}
void push(int dec)
{           
    if(top==n-1)
    {
        printf("stack is full\n");
    }
    else
    {
        top=top+1;
        stack[top]=dec;
    }
}
int pop()
{
    int bin=0,item;
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else 
    {
        while(top>=0)
        {
            item=stack[top];
            top=top-1;
            bin=bin*10+item;
        }
    }
    return bin;
}