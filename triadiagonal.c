 #include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100][100],i,j,row,column;
    printf("\n enter size of row n column of a square matrix min 4:-");
    scanf("%d",&row);
    column=row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\n enter value of arr[%d][%d]:-",i,j);
            scanf("\n%d",&arr[i][j]);
        }
    }
    printf("\n matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
           if((i==j)||(i-j==1)||(i-j==-1))
            {
                arr[i][j]=arr[i][j];
            }
            else 
            {
                arr[i][j]=0;
            }
        }
    }
    printf("\n triadiagonal matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    getch();
}
