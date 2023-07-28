#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,j;
    printf("enter the size of array:-");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]=",i);
        scanf("\n%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(ptr[j]<ptr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=ptr[i];
            ptr[i]=ptr[min];
            ptr[min]=temp;

        }
    }
    printf("\n after selection sort array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}