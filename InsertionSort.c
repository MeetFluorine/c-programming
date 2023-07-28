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
    for(i=1;i<n;i++)
    {
        int temp=ptr[i];
        j=i-1;
        while(j>=0 && ptr[j]>temp)
        {
            ptr[j+1]=ptr[j];
            j--;
        }
        ptr[j+1]=temp;
    }
    printf("\n after selection sort array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}