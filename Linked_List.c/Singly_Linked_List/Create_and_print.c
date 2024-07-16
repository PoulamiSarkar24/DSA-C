#include<stdio.h>
#include<stdlib.h>

struct node{
 	int data;
 	struct node *next;
}*head;

void Create_Linked_List(int n){
 	struct node *newnode,*temp;
 int data,i;
 head=(struct node*)malloc(sizeof(struct node));
 if(head==NULL){
 printf("Unable to allocate memory!!");
 	exit(0);
 }

 printf("Enter the data: ");
 scanf("%d",&data);
 head->data=data;
 head->next=NULL;
 temp=head;
 
for(i=2;i<=n;i++){
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL){
 	printf("Unable to allocate memory");
 break;
 		}
 printf("Enter the data of the node :");
 scanf("%d",&data);
 	newnode->data=data;
 	newnode->next=NULL;
 	temp->next=newnode;
 	temp=temp->next;
 }
}

void Traverse_Linked_List(){
 	struct node *temp;
 	if(head==NULL){
 		printf("List is empty ");
 		return ;
 }
 temp=head;
 while(temp!=NULL){
 printf("Data %d \n",temp->data);
 	temp=temp->next;
 }
}

int main(){
 int n;
printf("Enter total no. of nodes:");
 	scanf("%d",&n);
 Create_Linked_List(n);
 printf("Data in the list...\n");
 Traverse_Linked_List();
} 
