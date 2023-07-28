#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    float sallery;
    char name[50];
}e[5];
void main()
{
    int i;
    printf("\n enter employees detail:-\n");
    for(i=0;i<5;i++)
    {
        printf("\nenter employee(%d)'s id=",i+1);
        scanf("\n%d",&e[i].id);
        printf("\nenter employee(%d)'s name=",i+1);
        scanf("\n%s",e[i].name);
        printf("\nenter employee(%d)'s sallery=",i+1);
        scanf("\n%f",&e[i].sallery);
    }

    printf("\n employees detail:-\n");
    for(i=0;i<5;i++)
    {
        printf("\nemployee(%d)'s id=%d",i+1,e[i].id);
        printf("\nenter employee(%d)'s name=%s",i+1,e[i].name);
        printf("\nenter employee(%d)'s sallery=%f",i+1,e[i].sallery);
        
    }
    getch();
}
