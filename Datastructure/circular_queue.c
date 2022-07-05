#include<stdio.h>
#include<stdlib.h>
#define Q_size 100
int q[Q_size];


int front=0,rear=0;

void add(int item)
{
    rear=(rear+1)%Q_size;
    if(rear==front)
    {
        printf("queue is full");
        exit(1);
    }
    q[rear]=item;
}

void del()
{
    int temp;
    if(front==rear)
    {
        printf("queue is empty");
        exit(1);
    }
    front=(front+1)%Q_size;
    temp=q[front];
    printf("\nDeleted item is %d",temp);
}

void display()
{
    int i;
    if (front==-1)
    {
        printf("the queue is empty");
        
    }
    else
        printf("\n");

    for (i=front+1;i<=rear;i=(i+1)%Q_size)
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