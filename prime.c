#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter a number to check:-");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime",n);
            break;
        }
    }
    if(i==n)
    {
        printf("%d is prime",n);
    }
    getch();
} 