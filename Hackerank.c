#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, i=0;
    char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  /*  printf("%s\n",arr[a]);
    printf("%s\n",arr[b]);*/
    for (i=a;i<=b;i++)

    {   if(i<=9)
    {
        printf("%s\n",arr[i]);
    }
    else {
        if(i%2==0)
        printf("even\n");
    else 
    printf("odd\n");
    }
    }
    return 0;
}