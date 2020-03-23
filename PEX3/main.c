/** main.c
* ================================================================
* Name: Bryson Fraelich - 20 MAR 20
* Section: M3A
* Project: PEX3
* Purpose: RPN Calculator
* Documentation: I utilized the files from Canvas (ListAsLinkedList.h, 
* ListAsLinkedList.c, stackAsLinkedList.h, stackAsLinkedList.c,
* queueAsLinkedList.h, and queueAsListLinked.c). C3C Sprock showed me
* that my pointer error was because I had forgotten to use a () after
* the stackInit usage.
* =================================================================
*/

#include <stdio.h>
#include "ListAsLinkedList.h"
#include "stackAsLinkedList.h"
#include "queueAsLinkedList.h"
#include "mathFunctions.h"

int main()
{

	StackAsLinkedList *stack = stackInit();
	stackPush(stack, 8);
	stackPush(stack, 8);
	stackPush(stack, 19);
	stackPop(stack);
	stackPrint(*stack);

	QueueAsLinkedList *queue = queueInit();
	queueEnqueue(queue, 5);
	queueEnqueue(queue, 8);
	queueEnqueue(queue, 19);
    queueDequeue(queue);
	queuePrint(*queue);

	return 1;
}