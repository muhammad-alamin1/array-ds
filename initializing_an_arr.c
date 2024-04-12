// initializing an array
#include <stdio.h>

#define MAX 5

int main(void)
{
    int arr[MAX] = {}; // initialize 0 of all arr element
    int student[] = {} // size 0
    int marks[] = {1, 2, 3, 4, 5, 6}, index, arr_size;

    // total size of marks arr/ one element of marks arr
    arr_size = sizeof(marks) / sizeof(marks[0]);

    for(index = 0; index < arr_size; index++){
        printf("Marks[%d] = %d\n", index, marks[index]); // Garbage value
    }


    return 0;
}
