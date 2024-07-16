#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the string : ");
    scanf("%d",&n);
    n=n+1;
    char word[n];
    char update[n];
    printf("Enter the word : \n");
    for(int i = 0; i < n; i++){
        scanf("%c",&word[i]);
    }
    int top = -1;
    for(int i = 0; i < n; i++){
        top++;
        update[top] = word[i];
    }    
    for(int i = 0; i < n;i++){ 
        word[i] = update[top];
        top--;  
    }
    printf("The reversed string is: ");
    for(int i = 0; i < n; i++)      
        printf("%c",word[i]);
    return 0;
}
