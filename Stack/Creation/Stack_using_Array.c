#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the stack:\n");
    scanf("%d",&n);
    int arr[n];
    int pointer = 0;
    int input;
    printf("Enter 1 to push\n");
    printf("Enter 2 to pop\n");
    printf("Enter 3 to print the top\n");
    printf("Enter 4 to check empty\n");
    printf("Enter 5 to print whole stack\n");
    printf("Enter -1 to exit\n");
    scanf("%d",&input);
    while(input != -1){
        if(input == 1){
            printf("Enter data,enter -1 to stop:\n");
            int data;
            scanf("%d",&data);
            while(data != -1){
                if(pointer == n){
                    printf("Over flow: pop before insertion:\n");
                    break;
                }
                pointer++;
                arr[pointer] = data;
                scanf("%d",&data);
            }
        }else if (input == 2){
        
            if(pointer <= 0){
                printf("Under flow\n");
            } else {
                pointer--;
            }

        }else if(input == 3){
            if(pointer <= 0){
                printf("Under flow\n");
            }else{
                printf("Top of stack = %d\n",arr[pointer]);
            }
        }else if(input==4){
            if(pointer==0){
                printf("Stack empty\n");              
            }
            else printf("Not empty\n");
        }else if(input==5){
            for(int i=pointer;i>=1;i--){
                printf("%d\t",arr[i]);
            }
            printf("\n");
        }
         else if(input == -1) {
            break;
        } else {
            printf("Wrong Choice\n");
        }
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to print the top\n");
        printf("Enter 4 to check empty\n");
        printf("Enter 5 to print whole stack\n");
        printf("Enter -1 to exit\n");
        scanf("%d",&input);
    }
    return 0;
}
