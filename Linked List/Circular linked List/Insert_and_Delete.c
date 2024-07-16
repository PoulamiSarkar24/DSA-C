#include<stdio.h>  
#include<stdlib.h>  
struct node  
{
    int data;  
    struct node *next;  
};  
struct node *head = NULL;  
struct node *tail = NULL;  
void add(int data){  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    if(head == NULL){  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }else {  
        tail->next = newNode;  
        tail = newNode;  
        tail->next = head;  
    }  
}
void beginsert()  
{  
    struct node *ptr,*temp;  
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("Enter the node data:");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else  
        {    
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;  
            temp -> next = ptr;  
            head = ptr;  
        }  
    }  
}
void lastinsert()  
{  
    struct node *ptr,*temp;  
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("Enter Data: ");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;  
            ptr -> next = head;  
        }  
    }  
 
}
void begin_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head); 
    }  

    else  
    { ptr = head;  
        while(ptr -> next != head)  
            ptr = ptr -> next;  
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  

    }  
}
void last_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL) 
        printf("\nUNDERFLOW");  
       else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
    }  
    else  
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);    
    }  
}
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
        printf("\nnothing to print");      
    else  
    {  
        printf("List:\t");  
         while(ptr -> next != head)  
        {  
            printf("%d\t", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\t", ptr -> data);  
    }  
 
}
int main ()  
{
    int i=1,n,d;
    printf("Enter the number of elements in the cll:");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d", &d);
        add(d);
    }
    int choice;
        printf("1.Insert in begining\t2.Insert at last\t3.Delete from Beginning\t4.Delete from last\t5.Exit\n");  
        printf("Enter your choice:");        
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();  
            display();
            break;  
            case 2:  
            lastinsert();
            display();
            break;  
            case 3:  
            begin_delete();
            display();
            break;  
            case 4:  
            last_delete();
            display();
            break;
            case 5:  
            exit(0);  
            break;  
            default:  
            printf("Invalid Choice");  
    }  
