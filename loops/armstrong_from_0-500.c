#include<stdio.h>
#include<math.h>
int main()
{
int i,a,c=0,k;
    for(i=0;i<=500;i++)
  {  k=i;
    a=0;
    while(k)
 {
    c=k%10;
    c=pow(c,3);
    a=a+c;
    k=k/10;
 }
    if(i==a)
    printf("%d ,",a);
}
    printf("amstrong number between 0 to 500");
	return 0;
}