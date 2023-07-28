#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
 int n,i,r,j,x;
 char *ptr;
char ch[]="ancdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
 printf("\n Enter the length of the password:-");
 scanf("%d",&n);
 printf("\nHow much random password you want:-");
 scanf("%d",&x);
 ptr =(char*) malloc(sizeof(char)*n+1);
 srand(time(NULL));
for(j=0;j<x;j++)
{
 for(i=0;i<n;i++)
 {
  r=rand()%strlen(ch);
  ptr[i]=ch[r];
 }
  printf("%s\t",ptr);
}
 
 return 0;
}