#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int n = 10;
    int num = 7;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = num * (i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, i+1, ptr[i]);
    }
    printf("After table upto 15: \n");
    n = 15;
    ptr = realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = num * (i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, i+1, ptr[i]);
    }
    return 0;
}