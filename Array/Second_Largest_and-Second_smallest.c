#include <stdio.h>
    void main ()
    {
        int number[50];
        int i, j, a, n;
        printf("Enter the number of elements in array: \n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
         }
         printf("The 2nd largest number = %d\n", number[1]);
         printf("The 2nd smallest number = %d\n", number[n - 2]);
    }
