#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char str[100];
  scanf("%s",&str);
  int n=10,count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;str[j]!='\0';j++)
    {   
        if(str[j]==i)
        {
           count++;
        }
        if(count!=0)
        {
            printf("%d ",count);
                        
        }
        count=0;
    }
  }
  return 0;
}
