/** lab06.c
* ===========================================================
* Name: First Last
* Section: xxx
* Project: Lab 6 - Selection / Insertion Sorts
* ===========================================================
* Instructions:
*    1) Complete TASKS Below
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lab06.h"

// Local function prototypes follow
void fillArray(int array[]);
void swap(int* x, int* y);
void print(int nums[]);

int main() {
    int nums[n];
    
    // fill the array with random numbers
    fillArray(nums);
    
    /* TASK 0 - implement the function, SelectionSort() below
     * 0) Call the function and verify that it works
     */
    SelectionSort(nums, n);
    print(nums);

    /* TASK 1 - implement the function, InsertionSort() below
     * 0) Refill the array to get a new random set of 
     * numbers.
     * 1) Call the function and verify that it works
     */
    fillArray(nums);
    InsertionSort(nums, n);
    print(nums);

    return 0;
}

// Insertion Sort
void InsertionSort(int numbers[], int numbersSize) {
    int i = 0;
    for(i = 0; i < numbersSize; ++i){
        int j = i;

        // Insert numbers[i] into sorted part
        // Stopped once numbers[i] in correct position
        while(j > 0 && numbers[j] < numbers[j -1]){

            // Swap numbers
            swap(&numbers[j], &numbers[j - 1]);
            --j;
        }
    }
}

// Selection Sort
void SelectionSort(int numbers[], int numbersSize) {
    int i = 0;
    for(i = 0; i < numbersSize - 1; ++i){

        // Find index of smallest remaining element
        int indexSmallest = i;
        int j = 0;
        for(j = i + 1;  j < numbersSize; ++j){

            if(numbers[j] < numbers[indexSmallest]){
                indexSmallest = j;
            }
        }

        // Swap numbers[i] and numbers[indexSmallest]
        swap(&numbers[i], &numbers[indexSmallest]);
    }
}

//swaps two integer values
void swap(int* x, int* y) {
    int temp;

    temp = *y;
    *y = *x;
    *x = temp;
}

//fills an array of size n with random values
void fillArray(int array[]) {
    //set up for and then seed random number
    //generator
    struct timespec time;
    clock_gettime(CLOCK_REALTIME,&time);
    srandom((unsigned) (time.tv_nsec ^ time.tv_sec));

    // fill array with random ints from 0 to 29
    for (int i = 0; i < n; i++) {
        array[i] = (int) random() % 30;
    }
}

void print(int nums[]) {
    for (int i=0;i<n;i++) {
        printf("%d ",nums[i]);
    }
    printf("\n");
}