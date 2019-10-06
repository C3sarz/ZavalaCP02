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
