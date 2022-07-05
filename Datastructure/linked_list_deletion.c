#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
    printf("Elemet : %d\n", ptr->data);
    ptr = ptr->next;
    }
}
struct Node * deleteFirst(struct Node *head)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}
struct Node * deleteAtIndex(struct Node *head,int index)
{
    struct Node *p = head;
    struct Node *q = head->next; // there is some problem cross check this

    for(int i=0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}
struct Node * deletWithAValue(struct Node *head,int value)
{
    struct Node *p = head;
    struct Node *q = head->next; 

    while (q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

struct Node * deleteLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while(q->next !=NULL )
    {
        p = p->next;
        q = q->next;
    }
    p->next=NULL;
    free(q);
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
    third->next = NULL;
    printf("\nlinked list before deletion\n");
    Traversal(head);
    printf("\nlinked list after deletion\n");
    //head = deleteFirst(head);
    head = deleteAtIndex(head,2);
  // head = deleteLast(head);
    Traversal(head);
    return 0;
}