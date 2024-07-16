include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void create(int item)
{
struct node *ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW\n");
   }
   else
   {
   if(head==NULL)
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=item;
       head=ptr;
   }
   else
   {
       ptr->data=item;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;
}
    printf("\nNode Inserted\n");
}

}
int traverse()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        ptr = head;
        while(ptr != NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
void main ()
{
    int choice,item;
    do
    {
        printf("1.Append List\n2.Print\n3.Exit\nEnter your choice?");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the item\n");
            scanf("%d",&item);
            create(item);
            break;
            case 2:
            {
           printf("The list created is:\n");
           traverse();
            }
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Please enter valid choice\n");
        }
    }while(choice != 3);
}
