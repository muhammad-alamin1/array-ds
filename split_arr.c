// split an array
#include <stdio.h>
#include <stdlib.h>

void split_array(int original_arr[], unsigned int size, unsigned int split_value, int **arr1, int **arr2);
void print_arr(int arr[], unsigned int size);

int main(void)
{
    int original_arr[] = {2, 5, 1, 8, 0, 9, 3, 4};
    unsigned int original_arr_size, split_value = 5;
    int *arr1, *arr2;

    original_arr_size = sizeof(original_arr) / sizeof(original_arr[0]);

    arr1 = (int *)malloc(split_value * (sizeof(int)));
    arr2 = (int *)malloc((original_arr_size - split_value) * (sizeof(int)));

    if(arr1 == NULL || arr2 == NULL){
        fprintf(stderr, "Error! Memory Allocation Failed.!");
        return;
    }

    split_array(original_arr, original_arr_size, split_value, &arr1, &arr2);

    printf("Array 1!: ");
    print_arr(arr1, split_value);

    printf("Array 2!: ");
    print_arr(arr2, original_arr_size - split_value);

    free(arr1);
    free(arr2);

}

void split_array(int original_arr[], unsigned int size, unsigned int split_value, int **arr1, int **arr2)
{
    unsigned int i, left_index = 0, right_index = 0;

    for(i = 0; i < size; i++){
        if(original_arr[i] < split_value)
            (*arr1)[left_index++] = original_arr[i];
        else
            (*arr2)[right_index++] = original_arr[i];
    }
}

void print_arr(int arr[], unsigned int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}


