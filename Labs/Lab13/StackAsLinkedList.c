//
// Created by C22Bryson.Fraelich on 2/11/2020.
//

#include "stackAsLinkedList.h"

void stackPush(StackAsLinkedList* stack, int element){
    appendElementLinkedList(stack, element);
}

int stackPop(StackAsLinkedList* stack){
    // Get Element
    int data = getElementLinkedList(stack, (stack->numberOfElements) - 1);

    // Delete Node
    deleteElementLinkedList(stack, (stack->numberOfElements) - 1);
}