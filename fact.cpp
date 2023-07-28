#include<stdio.h>
long int factorial(int );
int main()
{
    int n,fact;
    printf("enter a number whose factorial you want:-");
    scanf("%d",&n);
    fact=factorial(n);
    printf("\n factorial of %d is %d",n,fact);
    return 0;
}
long int factorial(int n)
{
    if(n>1)
    {
        return (n*factorial(n-1));
    }
    else
    return 1;
}