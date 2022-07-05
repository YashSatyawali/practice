#include<stdio.h>
#include<stdlib.h>
#define stack_size 100
int s[stack_size];
int top =-1;

void push(int item)
{
    if(top==(stack_size-1))
    {
        printf("stack is full");
        exit(0);
    }
    top++;
    s[top]=item;
}

void pop()
{
    int temp;
    if(top==-1)
    {
        printf("stack is empty");
        exit(0);
    }
    temp=s[top];
    top--;
    printf("\npopped item is %d",temp);
}

void display()
{
    int i;
        printf("\n");

    for (i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    }
void main()
{
   int choice,item;
   while(1)
   {
       printf("\nEnter your choice\n");
       printf("1. Push\n");
       printf("2. Pop\n");
       printf("3. Display\n");
       printf("4. Exit\n");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1 :
        printf("enter the item to be pushed\t");
        scanf("%d",&item);
        push(item);
           break;
       case 2 :
       pop();
            break;
       case 3 :
       display();
       break;     
       case 4:
       exit(1);
       break;
       default:
       printf("wrong choice");
           break;
       }
       
   }
}