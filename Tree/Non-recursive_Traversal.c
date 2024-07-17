#include<stdio.h>
#include<stdlib.h>


struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} ;


struct TreeNode* newTreeNode(int data){
    struct  TreeNode *root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root -> val = data;
    root -> left  = NULL;
    root -> right = NULL;
    return root;
}
struct TreeNode* insert(struct TreeNode* root,int data) {
    if(root == NULL) {
        struct TreeNode* node = newTreeNode(data);
        return node;
    }
    if(root -> val > data) {
        root -> left = insert(root -> left ,data);
    } 
    if(root -> val <= data) {
        root -> right = insert(root -> right ,data);
    }
    return root;
}


struct TreeNode* TakeInput() {
    printf("enter data enter -1 to stop:");
    int data;
    scanf("%d",&data);
    struct TreeNode* root = NULL;
    while(data != -1) {
        root = insert(root,data);
        scanf("%d",&data);
    }
    return root;
}
struct TreeNode* delete(struct TreeNode* root,int data) {
    if(!root) return root;
    else if(root -> val > data) {
        root -> left = delete(root -> left,data);
    } else if(root -> val < data) {
        root -> right = delete(root -> right,data);
    } else {
        if(root -> left == NULL && root -> right == NULL) {
            free(root);
            return NULL;
        } else if(root -> left == NULL || root -> right != NULL) {
            if(root -> left != NULL) {
                struct TreeNode* left = root -> left;
                free(root);
                return left;
            } else {
                struct TreeNode* right = root -> right;
                free(root);
                return right;
            }
        } else {
            struct TreeNode* minNode = root -> right;
            while(minNode -> left != NULL) {
                minNode = minNode -> left;
            }
            int minVal = minNode -> val;
            root -> val = minVal;
            root -> right = delete(root -> right,minVal);
        }
    }
    return root;
} 
void preOrder(struct TreeNode* root) {
    struct TreeNode **stack=malloc(100*sizeof(struct TreeNode*));
    int top=0;
    stack[top++] = root;
    while(top) {
        struct TreeNode* front = stack[--top];
        printf("%d ",front -> val);
        if(front -> right != NULL) {
            stack[top++] = front -> right;
        }
        if(front -> left != NULL) {
            stack[top++] = front -> left;
        } 
    }
}


void postOrder(struct TreeNode* root) {
    struct TreeNode **stack=malloc(100*sizeof(struct TreeNode*));
    int top=0;
    stack[top++] = root;
    while(top) {
        struct TreeNode* front = stack[--top];
        if(front -> left != NULL) {
            stack[top++] = front -> left;
        } 
        if(front -> right != NULL) {
            stack[top++] = front -> right;
        }
        printf("%d ",front -> val);
    }
}


void inOrder(struct TreeNode* root) {
    struct TreeNode **stack=malloc(100*sizeof(struct TreeNode*));
    int top=0;
    while (top || root)
    {
        while (root != NULL)
        {
            stack[top++]=root;
            root=root->left;
        }
        root=stack[--top];
        printf("%d ",root -> val);
        root=root->right;
    }
}


int main() {
    struct TreeNode* root = TakeInput();
    printf("Enter 1 to insert\t ");
    printf("Enter 2 to delete\t ");
    printf("Enter 3 to print InOrder PreOrder PostOrder\t ");
    printf("Enter any other to exit ");
    int choice;
    scanf("%d",&choice);
    while(1) {
        if(choice == 1) {
            int data;
            printf("Enter data to insert. Enter -1 to stop :\n");
            scanf("%d",&data);
            while(data != -1) {
                root = insert(root,data);
                scanf("%d",&data);
            }
        } else if(choice == 2) {
            int data;
            printf("Enter data to be deleted :");
            scanf("%d",&data);
            root = delete(root, data);
        } else if(choice == 3) {
            printf("PreOrder : \n");
            preOrder(root);
            printf("\n");
            printf("InOrder : \n");
            inOrder(root);
            printf("\n");
            printf("PostOrder : \n");
            postOrder(root);
            printf("\n");
        } else {
            break;
        }
        printf("Enter 1 to insert\t ");
        printf("Enter 2 to delete \t");
        printf("Enter 3 to print InOrder PreOrder PostOrder\t ");
        printf("Enter any other to exit ");
        scanf("%d",&choice);
    }
    return 0;
}
