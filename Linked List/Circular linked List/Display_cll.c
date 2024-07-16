#include <stdio.h>
#include <stdlib.h>
struct node
{
 	struct node* prev;
 int data;
 	struct node* next;
};
struct node* createNode(int data)
{
 struct node* newNode=(struct node*)malloc(sizeof(struct node));
 newNode->data=data;
 newNode->next=NULL;
 newNode->prev=NULL;
 return newNode;
}
void addElement(struct node** head,int data,struct node** tail)
{
 struct node* ptr=createNode(data);
 	if(*head==NULL)
 {
    *head=ptr;
    *tail=ptr;
 }
 else
 {
    struct node* add=*tail;
    struct node* first=*head;
    add->next=ptr;
 	    ptr->prev=add;
    ptr->next=first;
    first->prev=ptr;
    *tail=ptr;
 	  }
}
void displayList(struct node* head,int count)
{
struct node* ptr=head;
 printf("List: \n");
 	while(count!=0)
 {
     printf("%d ",ptr->data);
 	     ptr=ptr->next;
 	     count--;
                }
}

void main()
{
 struct node* start=NULL,*tail=NULL;
 int d,ch,n,index;
 printf("Enter the no of nodes: ");
 scanf("%d",&n);
 int nn=n;
  printf("Enter value: ");
 	while(nn!=0)
 {
    scanf("%d",&d);
    addElement(&start,d,&tail);
    nn--;
 }
 printf("Enter no. of elements printed: "); 
 scanf("%d",&n);
 displayList(start,n);
}
