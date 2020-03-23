/** example14stackAsLinkedList.c
* ===========================================================
* Name: CS220
* Section: n/a
* Project: Lsn14 - A Queue Implemented with Linked List Library
* ===========================================================
*/
#include <stdio.h>
#include "queueAsLinkedList.h"

int main() {
    QueueAsLinkedList* myQueue = queueInit();
    queueEnqueue(myQueue,10);
    queueEnqueue(myQueue,13);
    queueEnqueue(myQueue,13);
    queueEnqueue(myQueue,14);
    queuePrint(*myQueue);
    printf("size = %d\n", queueSize(*myQueue));
    printf("pop = %d\n", queueDequeue(myQueue));
    queuePrint(*myQueue);
    printf("size = %d\n", queueSize(*myQueue));
    printf("peek = %d\n", queuePeek(*myQueue));
    queuePrint(*myQueue);
    printf("size = %d\n", queueSize(*myQueue));
    deleteLinkedList(myQueue);
    return 0;
}

