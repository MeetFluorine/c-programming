#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,ans=1,i,n;
    printf("enter a size of array:-");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter %d element:-",i+1);
        scanf("\n%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        ans=ans*ptr[i];
    }
    printf("%d",ans);
    return 0;

    
}