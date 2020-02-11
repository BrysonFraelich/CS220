/** example10a.c
* ===========================================================
* Name: Troy Weingart
* Section: n/a
* Project: Lsn10 - Multi-dimensional Arrays
* ===========================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 10

// Local function prototypes
void fillMatrix(int matrix[M][N]);
void printMatrix(int matrix[M][N]);

int main() {

    int matrixA[M][N];
    int matrixB[M][N];

    fillMatrix(matrixA);
    printMatrix(matrixA);
    fillMatrix(matrixB);
    printMatrix(matrixB);

    return 0;
}

// Fills an matrix of size MxN with random values
void fillMatrix(int matrix[M][N]) {
    //set up for and then seed random number generator
    static int seedDone = 0; //static variables retain their value between calls

    // if random number generator has been seeded already don't do it again
    if (!seedDone) {
        struct timespec time;
        clock_gettime(CLOCK_REALTIME, &time);
        srandom((unsigned) (time.tv_nsec ^ time.tv_sec));
        seedDone = 1;
    }

    // fill matrix with random ints
    for (int r = 0;r < M; r++) {
        for (int c = 0; c < N; c++) {
            matrix[r][c] = random() % (M+N);
        }
    }
}

void printMatrix(int matrix[M][N]) {
    for (int r = 0;r < M; r++) {
        for (int c = 0; c < N; c++) {
            printf("%5d ",matrix[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}