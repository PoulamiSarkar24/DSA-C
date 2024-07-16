#include<stdio.h>
int main(){
  int n;
  printf("Enter the size:");
  scanf("%d",&n);
  int input[n];
  printf("Enter the elements in sorted order:");
  for(int i=0;i<n;i++){
      scanf("%d",&input[i]);
  }
  int val;
  printf("Enter the element to be searched: ");
  scanf("%d",&val);
  int start=0;
  int end= n-1;
  int index = -1;
  int mid = (start+end)/2;
  while(start<=end){
        int mid = (start+end)/2;
        if(input[mid]==val){
            index = mid;
            break;
        }
        if(input[mid]>val){
            end = mid-1;
        }
        if (input[mid]<val){
            start = mid +1;
        }
        
    }
    if(index!=-1){
        printf("The element %d is at position:%d",val,index);
    }
    else printf("Not found");
  }
