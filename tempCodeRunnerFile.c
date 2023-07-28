#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int choice;
  int toss;
   intf("select your choice:-\n 0 => HEAD \n 1 => TAIL");
  printf("\n choose your choice:-");
  scanf("%d",&choice);
  srand(time(NULL));
  toss=rand()%2;
  if(choice==0 || choice==1)
  {
   if(toss==choice)
     {
	if (toss==1)
	printf("congratulation !! you won.... it's a TAIL");
	else
	printf("congratulation !! you won.... it's a HEAD");
     }
   else
	{
	 if(toss==1)
	 printf("sorry !! you loss... it's a TAIL");
	 else
	 printf("sorry !! you loss... it's a HEAD");
	}
  }
   else
    {
	  printf("invalid choose");
    }
 return 0;
}
