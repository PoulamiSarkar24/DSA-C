#include<stdio.h>
#include<stdlib.h>
int main() {
  int n;
  int e;
  printf("Enter the number of vertices and the number of edges : ");
  scanf("%d %d",&n,&e);
  int **edges = (int**) malloc(n*sizeof(int*));
  for(int i =0 ; i < n;i++) {
    edges[i] = (int*)malloc(n*sizeof(int));
    for(int j =0 ; j < n;j++) {
      edges[i][j] = 0;
     }
  }
  for(int i =0 ; i < e ;i++) {
    int source;
    int destination;
    printf("Enter the source and destination sepreated by a gap : ");
    scanf("%d %d",&source,&destination);
    edges[source][destination] = 1;
    edges[destination][source] = 1;
  }
  printf("Adjacency matrix: \n");
  for(int i =0 ; i < n;i++) {
      for(int j =0; j < n;j++) {
        printf("%d ",edges[i][j]);
      }
      printf("\n");
    }
  return 0;
}
