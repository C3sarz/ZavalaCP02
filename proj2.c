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
    int initialized = 0;

    ////START MAIN LOOP
    int escape = 0;
    while(!escape){
printf("Enter (i)nstert, (s)earch, inorder (t)raversal, or (q)uit");
        char input;
        int data;
        scanf("%c", input);
        switch (input) {
            case 'i':
                printf("\nEnter a number to insert:");
                scanf("%d", data);
                if (initialized == 0) {
                    Initialize(BinaryTree, data);
                    initialized = 1;
                }
                Insert(BinaryTree, data);
                printf("\n");
                break;

            case 's':
                printf("\nEnter a number to search:");
                scanf("%d", data);
                if (initialized == 0) printf("\n%d is not in the tree\n", data);
                else {
                    int status = Search(BinaryTree, data);
                    if (status == 1) printf("\n%d is in the tree\n", data);
                    else printf("\n%d is not in the tree\n", data);
                }
                break;


        } //end switch





    }
    ////END MAIN LOOP


    return 0;
}