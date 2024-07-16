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
        printf("Enter the data for node 1: ");
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

void insert_in_end(){
        struct node *newnode,*temp;
        int data;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the new data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(temp->next!=NULL){
                temp=temp->next;
        }
        temp->next=newnode;
}
void insert_in_begining(){
        struct node *newnode;
        int data;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the new data: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
}
void insert_ith_pos(int n){
        struct node * newnode,*temp;
        int data,i=1,pos;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the position of insertion: ");
        scanf("%d",&pos);
        printf("Enter the new data: ");
        scanf("%d",&newnode->data);
        if(pos>n){
                printf("Invalid");
        }
        else{
                temp=head;
                while(i<pos){
                        temp=temp->next;
                        i++;
                }
                newnode->next=temp->next;
                temp->next=newnode;
        }
}

int main(){
        int n;
        printf("Enter total no. of nodes:");
        scanf("%d",&n);
        Create_Linked_List(n);
        printf("Data in the list...\n");
        Traverse_Linked_List();
        int choice;
        printf("Enter 1 for insertion in begining\n2 for insertion in end\n3 for insertion in ith position: ");
        scanf("%d",&choice);
        switch(choice){

                case 1: insert_in_begining();
                        Traverse_Linked_List();
                        break;
                case 2:
                        insert_in_end();
                        Traverse_Linked_List();
                        break;
                case 3:
                        insert_ith_pos(n);
                        Traverse_Linked_List();
                        break;
                default: printf("Invalid input!!");
        }
        return 0;
}
