// searching element in an array
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* search(char* arr[], unsigned int size, char* element);

int main(void)
{
    char* name_arr[] = {"mucha", "aklima", "sumon", "muhammad", "ibrahim"};
    char* element = "muhammad", result;
    unsigned int arr_size, i;

    arr_size = sizeof(name_arr) / sizeof(name_arr[0]);

    result = search(name_arr, arr_size, element);
    if(result == "Element Not found.!")
        printf("Not Found.!");
    else
        printf("%s Found.!", element);

    return 0;
}

char* search(char* arr[], unsigned int size, char* element)
{
    unsigned int i;
    char* not_found = "Element Not found.!";

    for(i = 0; i < size; i++){
        if(arr[i] == element)
            return i;
    }
    return not_found;
}
