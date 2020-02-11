/** Example11a_stack.c
* ================================================================
* Name: First, Last
* Section: 
* Project: Example11a - Stack ADT implemented as an array and palindromes
* =================================================================
*
* Instructions:  For this Example you will be implementing a stack library
* that you will then use to determine if a string is a palindrome by
* pushing and popping characters on and off the stack.
*
* Complete the tasks below after completing the tasks in the stackAsArray.c
* file
*/
#include "stackAsArray.h"
#include <stdio.h>
#include <string.h>

//local function prototypes
bool isPalindrome(char str[]);

int main() {

    /** TASK 0 - Write isPalindrome() below
     * 0) ensure that you have completed implementation of
     * the functions in stackAsArray.c prior to starting this task.
     * 1) Complete the function implementation below and
     * test your function with input data.
     * Note: you MUST use the stack library in completing
     * this function.
     */

    char testPhrase[] = {"anutforajaroftuna\0"};
    printf("%s-> isPalindrome: %d",testPhrase,isPalindrome(testPhrase));

    return 0;
}

/** isPalindrome() - determines if a string is a palindrome
 * @param = str the string in question
 * @return true if the string is a palindrome otherwise false
 */
bool isPalindrome(char str[]) {
    return true;
}