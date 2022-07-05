#include <stdio.h>
#include<math.h>
void calc (int a, int b, int c, int d, int e, int *sum, int *avg, float *dev)
{
    int i;
  *sum = a + b + c + d + e;
  *avg = *sum/5;
  *dev = pow (a - *avg, 2) + pow (b - *avg, 2) + pow (c - *avg, 2) + 
  pow (d - *avg, 2) + pow (e - *avg, 2);
  *dev = sqrt (*dev / 5);
}

int main ()
{
    int f,g,h,i,j,sum,avg;
    float dev;
  printf ("enter the 5 digits : ");
  scanf ("%d%d%d%d%d",&f,&g,&h,&i,&j);
  calc(f,g,h,i,j,&sum,&avg,&dev);
  printf("\n sum = %d \n average = %d\n mean dev=%f ",sum,avg,dev);
  return 0;
}