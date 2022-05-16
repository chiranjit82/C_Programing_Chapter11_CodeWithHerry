#include<stdio.h>
#include <stdlib.h>

int main(){ 

    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d elments: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d elements is : %d \n", i+1, ptr[i]);
    }
    
    

    // int *ptr;
    // printf("The size of int is %d \n", sizeof(int));
    // ptr = malloc(4 * 4);
    return 0;
}