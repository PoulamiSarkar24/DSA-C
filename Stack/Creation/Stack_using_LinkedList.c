#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node * head){
    if(head == NULL) return 1;
    return 0;
}
struct Node* newNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = data;
    node -> next = NULL;
    return node;
}

struct Node* push(int data,struct Node *head){
    struct Node* currentNode = newNode(data);
    currentNode -> next = head;
    head = currentNode;
    return head;
}

void print(struct Node* head){
    if(isEmpty(head)){
        printf("Under flow \n");
        return;
    }
    struct Node* prev = head;

    while(prev != NULL){
        printf("%d ",prev -> data);
        prev = prev -> next;
    }
    printf("\n");
}
struct Node* pop(struct Node* head){
    if(isEmpty(head)){
        printf("Under flow \n");
        return NULL;
    }
    struct Node* temp = head;
    head = head -> next;
    free(temp);
    return head;
}

void top(struct Node* head) {
    if(isEmpty(head)) {
        printf("Under flow \n");
        return;
    }
    printf("Top of stack= %d \n", head -> data);
} 
    
int main(){
    int input,data;
    struct Node * head = NULL;
    printf("Enter 1 to push into the stack\n");
    printf("Enter 2 to pop the top element of the stack\n");
    printf("Enter 3 to print the top element of the stack\n");
    printf("Enter 4 to print the element in stack \n");
    printf("Enter -1 other to exit\n");
    scanf("%d", &input);
    while(input !=-1){
        if(input == 1){
            printf("Enter the data to be pushed and enter -1 to stop pushing \n");
            scanf("%d",&data);
            while(data !=-1){  
                head = push(data,head);
                scanf("%d",&data);
            }
        } else if(input == 2){
            head = pop(head);
        } else if(input == 3){
            top(head);
        } else if(input == 4){
            print(head);
        }else {
            break;
        }
        printf("Enter 1 to push into the stack\n");
        printf("Enter 2 to pop the top element of the stack the stack\n");
        printf("Enter 3 to print the top element of the stack\n");
        printf("Enter 4 to print the element in stack\n");
        printf("Enter -1 other to exit\n");
        scanf("%d", &input);
    }
    return 0;
}
