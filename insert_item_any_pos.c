// insert item in any position an array
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main(void)
{
    int arr[MAX_LENGTH];
    unsigned int i, new_item, index, arr_size, n = 5;

    for(i = 0; i < n; i++){
        printf("Enter Array element Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // display data
    printf("You Entered an Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // array size
    arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("\nEnter Index at which to insert the new item: ");
    scanf("%u", &index);

    // validation check
    if(index >= MAX_LENGTH){
        printf("Array is full. New item can't insert.!");
        return;
    }
    if(index < 0 || index > arr_size){
        printf("Invalid Index. New Item can't Inserted.!");
        return;
    }

    // shift elements to right make space for new item
    for(i = n; i > index; i--)
        arr[i] = arr[i-1];

    printf("Enter new element of an array: ");
    scanf("%d", &new_item);

    // insert new item;
    arr[index] = new_item;
    n++;

    // after item inserted
    printf("You Entered an Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
