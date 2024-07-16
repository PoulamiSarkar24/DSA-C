#include<stdio.h>
int main()
{
    int n,search,c=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("%d\n",n);

    int array[n];
    printf("Enter the number in array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("\nEnter the search number: ");
    scanf("%d",&search);
    printf("%d\n",search);
    for(int i=0;i<n;i++)
    {
        if(array[i] == search)
        {
            printf("%d is present in the array\n",search);
            c++;
        }
    }
    if(c==0)
	    printf("%d is not present in the array\n",search);
        return 0;
}
