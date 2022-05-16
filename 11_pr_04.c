#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d elements: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d elements is %d \n", i+1, ptr[i]);
    }
    n = 10;
    ptr = realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d elements: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d elements is %d \n", i+1, ptr[i]);
    }
    return 0;
}