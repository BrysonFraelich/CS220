/** listAsLinkedList.h
* ================================================================
* Name: Bryson Fraelich - 20 MAR 20
* Section: M3A
* Project: Header for Linked List Library
* Purpose: 
* =================================================================
*/

#include <stdbool.h>

#ifndef USAFA_CS220_S20_STUDENT_LISTASLINKEDLIST_H
#define USAFA_CS220_S20_STUDENT_LISTASLINKEDLIST_H

// Define a node of the linked list
typedef struct node {
    int data;
    struct node* next;
} Node;


// Define the type (meta-data) that manages the linked list of nodes
typedef struct {
    Node* head;
    Node* tail;
    int numberOfElements;
} LinkedList;


// Functions that manipulate a linked list
LinkedList* createLinkedList();

void appendElementLinkedList(LinkedList* list, int element);

void printLinkedList(LinkedList* list);

int lengthOfLinkedList(LinkedList* list);

int getElementLinkedList(LinkedList* list, int position);

void deleteElementLinkedList(LinkedList* list, int position);

/**********************************************************************************************/

void deleteLinkedList(LinkedList* list);

void changeElementLinkedList(LinkedList* list, int position, int newElement);

void insertElementLinkedList(LinkedList* list, int position, int element);

int findElementLinkedList(LinkedList* list, int element);

void selSortLinkedList(LinkedList* list);

void insertSortLinkedList(LinkedList* list);

#endif //USAFA_CS220_S20_STUDENT_LISTASLINKEDLIST_H