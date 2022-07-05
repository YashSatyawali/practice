#include <stdio.h>
#define SIZE 10
 
 
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
 
//Functions to push data
void push_stack1 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[++top1] = data;
  }
  else
  {
    printf ("Overflow\n");
  }
}
void push_stack2 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[--top2] = data; 
  }
  else
  {
    printf ("Overflow\n");
  }
}
 
//Functions to pop data
void pop_stack1 ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack 1\n", popped_value);
  }
  else
  {
    printf ("Underflow\n");
  }
}
void pop_stack2 ()
{
  if (top2 < SIZE)
  {
    int popped_value = ar[top2++];
    printf ("%d is being popped from Stack 2\n", popped_value);
  }
  else
  {
    printf ("Underflow \n");
  }
}
 
//Functions to Print Stack 1 and Stack 2
void print_stack1 ()
{
  int i;
  for (i = top1; i >= 0; --i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
void print_stack2 ()
{
  int i;
  for (i = top2; i < SIZE; ++i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
 
int main()
{
    
    int choice ,data=0;
    do{
 printf("\n 1.Insertion in both stack \n 2.Deletion in both stacks \n 3. Displays the content of both stack from top end \n 4. exit");
 printf("\nEnter your choice \n");
 scanf("%d",&choice);
 switch(choice)
 {
     case 1:
     printf("Enter the data to insert:\t");
     scanf("%d",&data);
      push_stack1 (data);
      push_stack2 (data);
     break;
     case 2:
     pop_stack1 ();
     pop_stack2 ();
     break;
     case 3:
     printf("Data in 1st stack: ");
     print_stack1 ();
     
     printf("Data in 2nd stack: ");
     print_stack2 ();
     break;
     case 4:
     printf("Exit");
     break;
     default:
     printf("Invalid choice");
     
 }}while(choice!=4);
  return 0;
}
