// merge array
#include <stdio.h>
#include <stdlib.h>

void merge_arr(int arr1[], unsigned int size1, int arr2[], unsigned int size2, int merge_arr[]);

int main(void)
{
    int arr1[] = {1, 2, 3}, arr2[] = {4, 5, 6, 7};
    unsigned int size1, size2, merge_size;

    size1 = sizeof(arr1) / sizeof(arr1[0]);
    size2 = sizeof(arr2) / sizeof(arr2[0]);
    merge_size = size1 + size2;

    int marge_arr[merge_size];

    merge_arr(arr1, size1, arr2, size2, marge_arr);

    printf("Merged Array: ");
    for (int i = 0; i < merge_size; i++) {
        printf("%d ", marge_arr[i]);
    }
    printf("\n");


    return 0;
}

// merge arr
void merge_arr(int arr1[], unsigned int size1, int arr2[], unsigned int size2, int merge_arr[])
{
    unsigned int i, j, k;

    // copy ele of the first arr to merge arr
    for(i = 0; i < size1; i++)
        merge_arr[i] = arr1[i];

    // copy ele of sec arr to merge arr;
    for(j = 0, k = size1; j < size2; j++, k++)
        merge_arr[k] = arr2[j];
}

