#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node* newNode(int data)
{
    struct Node * node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = data;
    node -> next =NULL;
    return node;
}

struct Node* takeInput(){
    struct Node* head = NULL;
    struct Node * tail = NULL;
    printf("enter the data into the linkedlist \n");
    int data;
    scanf("%d",&data);
    while(data != -1){

        struct Node* currentNode =newNode(data);

        if(head == NULL){
            head = currentNode;
            tail = currentNode;
        } else {
            tail ->next = currentNode;
            tail = tail -> next;
        }
        scanf("%d",&data);
    }
    return head;
}

void print(struct Node * head){
    if(head == NULL){
        printf("linkedlist is empty please enter data\n");
        return ;
    }
    while (head!=NULL){
        printf("%d ",head->data);
        head = head ->next;
    }
    printf("\n");
    
}
struct Node * rev(struct Node * head){
    struct Node* curr  = head;
    struct Node* prev = NULL;
    struct Node *next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
 
int main(){ 
    struct Node* head = takeInput();
    printf("the LinkedList is :\n");
    print(head);
    printf("the LinkedList after reversal is :\n");
    struct Node* temp = rev(head);
    print(temp);
   
    return 0;   
}
