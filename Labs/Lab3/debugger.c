/** debugger.c
 * ===========================================================
 * Name: CS220
 * Section: n/a
 * Project: A c-file for debugging example.
 * ===========================================================
*/

#include <stdio.h>
#include <math.h>

 void squareIt(int array[]) {
     for (int i = 0; i < 20; i++) {
         array[i] = (int) pow(array[i],2);
     }
 }

 int main() {
     int vals[20];

     for (int i = 0; i < 20; i++) {
         vals[i] = i;
         printf("vals[%d] = %d\n",i,vals[i]);
     }

     squareIt(vals);

     for (int i = 0; i < 20; i++) {
         printf("vals[%d] = %d\n",i,vals[i]);
     }
 }