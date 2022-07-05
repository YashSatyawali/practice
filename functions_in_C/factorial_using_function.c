#include<stdio.h>
int fact(int f)
{
    int a=1,i;
    for(i=1;i<=f;i++)
    {
        a=a*i;
    }
    return (a);
}
int main()
{
    int c,d=0;
    printf("Enter the number for factorial : ");
    scanf("%d",&c);
    d=fact(c);
    printf("\nfactorial of %d is = %d",c,d);
    return (0);
}