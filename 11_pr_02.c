#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d elements: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d elements of %d \n", i+1, ptr[i]);
    }

    return 0;
}