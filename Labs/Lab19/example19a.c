/** example19a.c
* ================================================================
* Name: first last
* Section: xxx
* Project: Header for BST library
* =================================================================
*/
#include <stdio.h>
#include "bstAsLinkedDS.h"

int main() {
    BSTnode* root = NULL;
    root = insertBST(root,5);
    root = insertBST(root,10);
    root = insertBST(root,1);
    root = insertBST(root,7);
    root = insertBST(root,3);
    root = insertBST(root,6);
    printInorderBST(root);printf("\n");
    printPreorderBST(root);printf("\n");
    printPostorderBST(root);printf("\n");
}

