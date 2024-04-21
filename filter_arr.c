// filter an array
#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], unsigned int size);
int* filter_arr(int arr[], int size, int condition, int* new_size);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 2, 6, 2, 7};
    int size, new_size, condition = 2;
    int* result;

    size = sizeof(arr) / sizeof(arr[0]);
    result = filter_arr(arr, size, condition, &new_size);

    printf("Original Array: ");
    print_arr(arr, size);
    printf("Filtered Array: ");
    print_arr(result, new_size);

    free(result);

    return 0;
}

void print_arr(int arr[], unsigned int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int* filter_arr(int arr[], int size, int condition, int* new_size)
{
    int* filtered_arr;
    unsigned int count = 0, i;

    filtered_arr = (int*)malloc(size * (sizeof(int)));
    if(filtered_arr == NULL){
        fprintf(stderr, "Error! Memory Allocation Failed.!!");
        return NULL;
    }

    for(i = 0; i < size; i++){
        if(arr[i] == condition)
            filtered_arr[count++] = arr[i];
    }

    *new_size = count;
    free(filtered_arr);

    filtered_arr = realloc(filtered_arr, count * sizeof(int));
    if(filtered_arr == NULL && count > 0){
        fprintf(stderr, "Error! Memory Reallocation Failed.!");
        return NULL;
    }

    return filtered_arr;
}
