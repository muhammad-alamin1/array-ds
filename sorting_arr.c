// sorting array smallest to large
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[] = {7, 3, 0, 8, 1, 3, 2, 5, 0, 10}, i, j, temp, arr_size;

    arr_size = sizeof(arr) / sizeof(arr[0]);

    // before sorting
    printf("Before Sorting.!");
    for(i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    for(i = 0; i < arr_size; i++){
        for(j = i+1; j <= arr_size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // after sorting
    printf("After Sorting.!");
    for(i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    return 0;
}
