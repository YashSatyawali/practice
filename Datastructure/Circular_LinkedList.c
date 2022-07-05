#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
     
    do
    {
        printf("element is %d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
}

struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    
    struct Node * p = head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    
    head->data=7;
    head->next = second;    

    second->data=11;
    second->next = third;
    
    third->data=66;
    third->next = head;
    printf("circularlinkedlist before\n");
    linkedListTraversal(head);
    head=insertAtFirst(head, 54);
    printf("circularlinkedlist after insertion at first\n");
    linkedListTraversal(head);

    return 0;
}