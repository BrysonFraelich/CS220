/** example13stackAsLinkedList.c
* ===========================================================
* Name: Troy Weingart
* Section: n/a
* Project: Lsn13 - A Stack Implemented with Linked List Library
* ===========================================================
*/
#include <stdio.h>
#include "stackAsLinkedList.h"

int main() {
    StackAsLinkedList* myStack = stackInit();
    stackPush(myStack,10);
    stackPush(myStack,13);
    stackPush(myStack,13);
    stackPush(myStack,14);
    stackPrint(*myStack);
    printf("size = %d\n", stackSize(*myStack));
    printf("pop = %d\n", stackPop(myStack));
    stackPrint(*myStack);
    printf("size = %d\n", stackSize(*myStack));
    printf("peek = %d\n", stackPeek(*myStack));
    stackPrint(*myStack);
    printf("size = %d\n", stackSize(*myStack));
    deleteLinkedList(myStack);

    return 0;
}

