#include<stdio.h>
#include<stdlib.h>
#define Q_size 100
int q[Q_size];
int front=-1,rear=-1;

void add(int item)
{
    if(rear==Q_size-1)
    {
        printf("queue is full");
        exit(0);
    }
    rear++;
    q[rear]=item;
}

void del()
{
    int temp;
    if(front==rear)
    {
        printf("queue is empty");
        exit(0);
    }
    front++;
    temp=q[front];
    printf("\nDeleted item is %d",temp);
}

void display()
{
    int i;
        printf("\n");

    for (i=front+1;i<=rear;i++)
    {
        printf("%d\t",q[i]);
    }
    }
void main()
{
   int choice,item;
   while(1)
   {
       printf("\nEnter your choice\n");
       printf("1. Add\n");
       printf("2. Del\n");
       printf("3. Display\n");
       printf("4. Exit\n");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1 :
        printf("enter the item to be added\t");
        scanf("%d",&item);
        add(item);
           break;
       case 2 :
       del();
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