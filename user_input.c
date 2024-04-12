// initializing an array using user input
/*
    calculate the sum & ave of all elements of arr
    calculate gpa
    input validation check
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5
#define MAX_SUBJECT 100
#define MAX_LENGTH 100

int main(void)
{
    unsigned int index, sum = 0, num_of_sub;
    unsigned int *marks;
    float average, gpa;

    printf("Enter the number of subject in between 1 to 100: \n");
    scanf("%u", &num_of_sub);

    // check number of sub can't less than 1 or more than 100
    if(num_of_sub < 1 || num_of_sub > 100){
        perror("Error! Invalid number of subject.");

        return EXIT_FAILURE;
    }

    // now allocate the memory
    marks = (int*)malloc(num_of_sub * sizeof(int));
    if(marks == NULL){
        printf("ERROR: Memory allocation failed.\n");
        return 1;
    }

    // user input
    printf("Enter subject marks in between 0 to 100\n");
    for(index = 0; index < num_of_sub; index++){
        int mark;

        do{
            printf("Subject Marks[%u] = ", index + 1);
            scanf("%u", &mark);

            if(mark < 0 || mark > 100)
                printf("Warning: Invalid Marks.\n");
        }while(mark < 0 || mark > 100);
        marks[index] = mark;
    }
    printf("\n\n");

    // display data
    for(index = 0; index < num_of_sub; index++){
        printf("Marks[%u] = %u\n", index+1, marks[index]);
        sum += marks[index];
    }
    average = (float)sum / num_of_sub;

    if(average >= 80)
        gpa = 5.0;
    else if(average >= 70)
        gpa = 4.0;
    else if(average >= 60)
        gpa = 3.5;
    else if(average >= 50)
        gpa = 3.0;
    else if(average >= 40)
        gpa = 2.0;
    else
        gpa = 0.0;

    printf("\n\n");
    printf("Total Sum: %u\n", sum);
    printf("Average: %.2f\n", average);
    printf("GPA: %.2f\n", gpa);

    free(marks);

    return 0;
}
