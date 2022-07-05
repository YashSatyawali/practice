#include<stdio.h>
#include<string.h>
int main()
{
	char sen[100];
	int i;
	printf("Enter your sentence. (Less than 100 chracters)\n\n");
	gets(sen);
	printf("After how muany characters you want to extract the line : ");
	scanf("%d", &i);
	i--;
	if (i<0)
		i = 0;
	printf("%s\t", &sen[i]);
	return 0
}

