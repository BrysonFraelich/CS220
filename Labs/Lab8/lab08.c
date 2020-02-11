/** lab06.c
* ===========================================================
* Name: First Last
* Section: xxx
* Project: Lab 6 - Merge Sorts
* ===========================================================
* Instructions:
*    1) Complete TASKS Below
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lab08.h"

// Local function prototypes
void fillArray(int array[]);
void swap(int* x, int* y);
void Merge(int array[], int lBound, int mid, int rBound);
void print(int nums[], int n);

int main() {
    int nums[N];

     /* TASK 0 - implement the function, mergeSort() below
      *  Help - the merge prototype is given to you above
      */
    fillArray(nums);
    MergeSort(nums,0,N-1);
    print(nums, N);

    return 0;
}

/**
 * Merge() - Given two sorted sublists array[lBound..mid] and array[mid+1..rBound],
 * merge them into a single sorted list in array[lBound..rBound]
 * @param array - the array to sort
 * @param lBound - the lowest index of the first sublist
 * @param mid - the highest index of the first sublist
 * @param rBound - the highest index of the second sublist
 */
void Merge(int numbers[], int lBound, int mid, int rBound) {

}

/** -------------------------------------------------------------------
 * MergeSort() - Perform a mergesort on a portion of an array, from lBound
 * to rBound
 * @param array - the array to sort
 * @param lBound - the starting index of the sublist to sort
 * @param rBound - the ending index of the sublist to sort
 */
void MergeSort(int numbers[], int lBound, int rBound) {

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
    static int seedDone = 0; //static variables retain their value between calls

    // modified so the seed is only done once
    if (!seedDone) {
        struct timespec time;
        clock_gettime(CLOCK_REALTIME, &time);
        srandom((unsigned) (time.tv_nsec ^ time.tv_sec));
        seedDone = 1;
    }

    // fill array with random ints from 0 to 99
    for (int i = 0; i < N; i++) {
        array[i] = (int) random() % 100;
    }
}

void print(int nums[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d ",nums[i]);
    }
    printf("\n");
}