#include<stdio.h>
#include<conio.h>
void main()
{
    int dec,rem,bin=0,i=1;
    printf("\n enter a decimal number:-");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%2;
        bin=bin+rem*i;
        dec=dec/2;
        i=i*10;
    }
    printf("%d",bin);
    getch();
}