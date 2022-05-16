#include<stdio.h>
#include <stdlib.h>

int main(){ 
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d elements is %d \n", i+1, ptr[i]);
    }
    
    return 0;
}