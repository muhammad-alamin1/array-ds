// insert an item last position in the array;
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    unsigned int n, i, new_size, new_item;

    printf("Enter the size of elements in the array: ");
    scanf("%u", &n);

    // now allocate the memory
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        fprintf(stderr, "Error: Memory Allocation Failed.!\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // display data
    printf("\nYou Entered array elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // now reallocate the memory
    printf("\nEnter the increase size of an array do you want: ");
    scanf("%u", &new_size);

    // now reallocate the memory
    arr = realloc(arr, (n+new_size) * sizeof(int));
    if(arr == NULL){
        fprintf(stderr, "Memory Reallocation Failed.!\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter new element of an array: ");
    scanf("%u", &new_item);

    // insert new item in last position
    arr[n] = new_item;
    n++;

    // display data
    printf("Array After inserting item: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
