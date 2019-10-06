//
// Created by cesar on 10/5/2019.
//

#include "io.h"
#include "bst.c"
#include <stdio.h>
#include <stdlib.h>

void Initialize(struct Node *root, int data) {
    root->key = data;
    root->RightNode = NULL;
    root->LeftNode = NULL;
}

///Manages the insertion to the tree.
void Insert(struct Node *root, int data) {
    if (root->key == data) return;   //Equality scenario

    if (data > root->key) {   ///Dealing with RIGHT BRANCH
        if (root->RightNode != NULL) {
            Insert(root->RightNode, data); //recursive
        } else {
            struct Node *newBranch;
            newBranch = malloc(sizeof(struct Node));
            Initialize(newBranch, data);
            root->RightNode = newBranch;
        }
    } else if (data < root->key) {   ///Dealing with LEFT BRANCH
        if (root->LeftNode != NULL) {
            Insert(root->LeftNode, data);
        } else {
            struct Node *newBranch;
            newBranch = malloc(sizeof(struct Node));
            Initialize(newBranch, data);
            root->LeftNode = newBranch;
        }
    }
}

int Search(struct Node *root, int data) {
    if (root->key == data) return 1;
    int status = 0;

    if (data > root->key) {      ///Right branch search.
        if (root->RightNode != NULL) {
            status = Search(root->RightNode, data);
        } else return 0;
    } else if (data < root->key) {      ///Left branch search.
        if (root->LeftNode != NULL) {
            status = Search(root->LeftNode, data);
        } else return 0;
    }
    return status;
}

void Traversal(node *root) {        ///USING NEW DEFINITIONS
    if (root->LeftNode != NULL) {
        Traversal(root->LeftNode);
    }
    printf("%d ", root->key);
    if (root->RightNode != NULL) {
        Traversal(root->RightNode);
    }
}

void ReleaseAllNodes(node *root) {      ///USING NEW DEFINITIONS
    if (root->RightNode != NULL) ReleaseAllNodes(root->RightNode);
    if (root->LeftNode != NULL) ReleaseAllNodes(root->LeftNode);
    free(root);
}

int Prompt(node *BinaryTree, int *initialized) {      ///USING NEW DEFINITIONS
    printf("Enter (i)nstert, (s)earch, inorder (t)raversal, or (q)uit");
    char input;
    int data;
    scanf("%c", input);
    switch (input) {
        case 'i':
            printf("\nEnter a number to insert:");
            scanf("%d", data);
            if (*initialized == 0) {
                Initialize(BinaryTree, data);
                *initialized = 1;
            }
            Insert(BinaryTree, data);
            printf("\n");
            break;

        case 's':
            printf("\nEnter a number to search:");
            scanf("%d", data);
            if (*initialized == 0) printf("\n%d is not in the tree\n", data);
            else {
                int status = Search(BinaryTree, data);
                if (status == 1) printf("\n%d is in the tree\n", data);
                else printf("\n%d is not in the tree\n", data);
            }
            break;

        case 't':
            printf("\n");
            Traversal(BinaryTree);
            break;

        case 'q':
            ReleaseAllNodes(BinaryTree);
            return 1;
            break;

        default:
            return 0;

    } //end switch
    return 0;
}
