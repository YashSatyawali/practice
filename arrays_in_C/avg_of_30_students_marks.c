#include <stdio.h>

int main()
{
    int i,sum=0,avg;
    int marks[30];
    for(i=0;i<=29;i++)
  {
    printf("enter marks\n");
    scanf("%d",&marks[i]);
  }
    for(i=0;i<=29;i++)
    {
        sum=sum+marks[i];
    }
    avg =sum/5;
    printf("average marks =%d\n",avg);
    return 0;
}