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
#include "bst.c"
#include "io.c"

/**********************************************
* Description: * Main function.
* Input: *
* Output: *
***********************************************/
int main() {
    struct Node *BinaryTree;
    BinaryTree = malloc(sizeof(struct Node));
    int *initialized;
    *initialized = 0;

    ////START MAIN LOOP
    int escape = 0;
    while (escape == 0) {
        escape = Prompt(BinaryTree, initialized);
    }
    ////END MAIN LOOP


    return 0;
}