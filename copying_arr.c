// copying arr
/*
    arrays are passed by reference, so modifying elements of the destination array
    will also affect the source array if they are the same array.
    If you need an independent copy, you might need to allocate memory
    dynamically for the destination array.
*/
#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int size);
void copying_arr(int source[], int dest[], int size);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5}, arr_size;

    arr_size = sizeof(arr) / sizeof(arr[0]);
    int destination[arr_size];

    printf("Original Array:  ");
    print_array(arr, arr_size);

    printf("\n\n");

    // copying
    copying_arr(arr, destination, arr_size);

    printf("After copying Array:  ");
    print_array(arr, arr_size);

    return 0;
}

// Function to print an array
void print_array(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");
}

void copying_arr(int source[], int dest[], int size)
{
    int i;

    for(i = 0; i < size; i++)
        dest[i] = source[i];
}
