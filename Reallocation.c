#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr,n,i,x,sum,choice;
   printf("enter size of array:-");
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
     printf("enter value at %d element of array:-",i+1);
     scanf("\n%d",&ptr[i]);
   }
   for(i=0;i<n;i++)
   {
     printf("value at %d element of array is :-%d\n",i+1,ptr[i]);
   }
   printf(" choice are:-\n1 = yes\n0 = no\nenter your choice:-");
   scanf("%d",&choice);
   if(choice==1)
   {
       printf("enter new number of elment:-");
       scanf("%d",&x);
       sum=x+n;
       ptr=(int*)realloc(ptr, x*sizeof(int));
       for(i=n;i<sum;i++)
       {
	  printf("enter value at %d element of array:-",i+1);
	  scanf("%d",&ptr[i]);
       }
       printf("elements after adding more elements :\n");
       for(i=0;i<sum;i++)
       {
	  printf("value at %d element of array is:-%d\n",i+1,ptr[i]);
       }
   }
   else
   {
	exit(0);
   }
   free(ptr);
   return 0;
}
