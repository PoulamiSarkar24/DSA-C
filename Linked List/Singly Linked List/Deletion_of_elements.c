#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;
        printf("Enter 1 for deletion form front : \n");
        printf("enter 2 for deletion from an index: \n");
        printf("Enter 3 for deletion from End: \n");
        printf("Enter Choise:");
        int ch;
        scanf("%d",&ch);
        printf("Linked list before alteration\n");
        linkedListTraversal(head);
switch(ch)
        {
        case(1):
          head = deleteFirst(head);
          break;
        case(2):
        {
          int i;
          printf("enter the index:\n");
          scanf("%d", &i);
          head = deleteAtIndex(head, i);
          break;
        }
        case(3):
          head = deleteAtLast(head);
          break;
        default: printf("wrong choise");
}
    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}
