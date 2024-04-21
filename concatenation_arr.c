// concatenation array
#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], unsigned int size);
int* concatenated_array(int arr1[], unsigned int size1, int arr2[], unsigned int size2);

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    unsigned int arr1_size, arr2_size;
    int* concat_arr;

    arr1_size = sizeof(arr1) / sizeof(arr1[0]);
    arr2_size = sizeof(arr2) / sizeof(arr2[0]);

    concat_arr = concatenated_array(arr1, arr1_size, arr2, arr2_size);

    printf("Concatenate Array: ");
    print_arr(concat_arr, arr1_size + arr2_size);

    free(concatenated_array);
}

int* concatenated_array(int arr1[], unsigned int size1, int arr2[], unsigned int size2)
{
    int* result;
    unsigned int new_size, i;

    new_size = size1 + size2;
    result = (int*)malloc(new_size * (sizeof(int)));
    if(result == NULL){
        fprintf(stderr, "Error! Memory Allocation Failed.!");
        return;
    }

    // copy element of the first arr
    for(i = 0; i < size1; i++)
        result[i] = arr1[i];

    // copy element of the sec arr
    for(i = 0; i < size2; i++)
        result[size1 + i] = arr2[i];

    return result;
}

void print_arr(int arr[], unsigned int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
