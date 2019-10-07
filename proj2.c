/**********************************************
* Name: Cesar Zavala *
* Date: 10/06/2019 *
* Assignment: Project 2 – Binary Trees *
***********************************************
* Provides functionality of a binary search tree. *
***********************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bst.h"

/**********************************************
* Description: * Main function.
* Input: *
* Output: *
***********************************************/
int main() {
    Tree *BinaryTree;
    BinaryTree = malloc(sizeof(struct node));
    BinaryTree = NULL;
//    int *initialized;
//    *initialized = 0;

    ////START MAIN LOOP
    int escape = 0;
    while (escape == 0) {
        escape = Prompt(&BinaryTree);
    }
    ////END MAIN LOOP
    printf("Exiting!");

    return 0;
}