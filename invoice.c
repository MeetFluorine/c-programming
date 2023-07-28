#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void generate_invice(char name[50],char date[50])
{
    //char name[50];
    printf("=======Shri Dhaba Muzaffarnagar=======");
    printf("\n\t---------------------------");
    printf("\n date-%s",date);
    printf("\n invoice to: %s",name);
    printf("\n-----------------------------");
    printf("ITEMS\t\t");
    printf("QTY\t\t");
    printf("AMOUNT\n");
    printf("\n-----------------------------");
}
void billbody(char item[30],int qty,float price)
{
    printf("\n\n%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f",price);
}
void calculation(float total)
{
    float dis=0.1*total;
    float NetTotal=total-dis;
    float cgst=0.09*NetTotal,GrandTotal=NetTotal+2*cgst;
    printf("\n-----------------------------");
    printf("sub total\t\t\t%.2f",total);
    printf("|nDiscount @10%\t\t\t%.2f",dis);
    printf("\nCGST @9%\t\t\t%.2f",cgst);
    printf("\nSGST @9%\t\t\t%.2f",cgst);
    printf("\n-----------------------------");
    printf("\nGrand Total\t\t\t%2.f",GrandTotal);

}
int main()
{
    int choice;
    char ch;
    do
    {
        printf("=========MENU\2=========\n\n");
        printf("\tpress 1 to generate invoice\n");
        printf("\tpress 2 to search invoice\n");
        printf("\tpress 3 to show all invoice\n");
        printf("\nenter your choice here:-");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: generate_invoice();
                    printf("\ngreat! you want to generate a new invoice\n");
            break;
            case 2: search_invoice();
                    printf("\ngreat! you want to search invoice\n");
            break;
            case 3: show_all_invoice();
                    printf("\ngreat! you want to see all the invoice\n");
            break;
            default:
            printf("invalid choice");
        }
        printf("\n do you want to conitnue(y/n):-");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    return 0;
}