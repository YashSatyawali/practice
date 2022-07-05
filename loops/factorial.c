#include <stdio.h>

int main()
{
    int i,f=1,n;
    printf("Enter the number whose factorial is needed =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nfact of %d is = %d",n,f);
    return 0;
}