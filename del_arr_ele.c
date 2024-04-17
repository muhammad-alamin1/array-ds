// sorting array smallest to large
#include <stdio.h>
#include <stdlib.h>

void delete_element(int arr[], int *size, int index);

int main(void)
{
    int arr[] = {7, 3, 0, 8, 1, 3, 2, 5, 0, 10}, i, arr_size;

    arr_size = sizeof(arr) / sizeof(arr[0]);

    // before sorting
    printf("Original Array: ");
    for(i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    delete_element(arr, &arr_size, 2);


    // after sorting
    printf("After delete element: ");
    for(i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void delete_element(int arr[], int *size, int index)
{
    int i;

    if(index < 0 || index >= *size){
        printf("Error! Invalid Index.");
        return;
    }

    for(i = index; i < *size - 1; i++)
        arr[i] = arr[i+1];

    (*size)--;
}
