// insert item in first position an array
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    unsigned int n, new_item, new_size, i;

    printf("Enter the size of element in the array: ");
    scanf("%u", &n);

    // allocate the memory
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        fprintf(stderr, "Error: Memory Allocation Failed.! \n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the elements of array: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // display prev data
    printf("You enter the elements of array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter the new size of element do you want in the array: (Provide 1, otherwise crash this program)!");
    scanf("%u", &new_size);

    // reallocate the memory block
    arr = realloc(arr, new_size * sizeof(int));
    if(arr == NULL){
        fprintf(stderr, "Memory Reallocation Failed.!");
        exit(EXIT_FAILURE);
    }

    printf("\nEnter the new element: ");
    scanf("%u", &new_item);

    // shift all elements to the right by one position
    for(i = n; i > 0; i--)
        arr[i] = arr[i-1];

    // insert new element in first position
    arr[0] = new_item;

    // display new data
    printf("You enter the elements of array with new item in first position: ");
    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
