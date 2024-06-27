#include<stdio.h>
int main(){
    int i=0,pos=0,size=0,val=0;
    int arr[50]={0};
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of insertiion:");
    scanf("%d",&pos);
    printf("Enter the elemnts:");
    scanf("%d",&val);
    for(i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    for(i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    }