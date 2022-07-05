#include<stdio.h>
int main()
{
 int num,a=0,b=0,c=0,act;
 do
 {
     printf("\nenter the number : ");
     scanf("%d",&num);
     if(num==0)
     a++;
     if(num>0)
     b++;
     if(num<0)
     c++;
     
   printf("\n\nWant to anter another number? '1' for YES and '0' for NO : ");
   scanf("%d",&act);
  }
  while(act);
  printf("\n\nYou have entered %d positive, %d negative and %d zero integers.", b,c,a);
  return(0);
}