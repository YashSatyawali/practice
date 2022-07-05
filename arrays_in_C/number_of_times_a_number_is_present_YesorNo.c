#include<stdio.h>	
int main()
{
	int arr[5],i,a,count=0;
	for (i = 0; i <=4; i++)
	{
    		printf("Enter numebr\n");
		scanf("%d", &arr[i]);
	}
	printf("\nThe numebr you want to search : ");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
	    if(arr[i]==a)
	    {
	      count++;
	    }
	        
	    }
	if(count)
	{
	    printf("\nThe number %d is there %d times",a,count);
	}
	else
	{
	    printf("\n The number %d is not present",a);
	}
	return 0;
}