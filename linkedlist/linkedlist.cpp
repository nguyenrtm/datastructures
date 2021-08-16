#include<iostream>

// declaring the node structure
struct node {
    int data; 
    node* link;
}

// initialize a pointer to NULL
node* = A;
A = NULL;

// declaring a first node
node* temp = new node();
temp->data = 2;
temp->link = NULL;

// let A be pointer to the first node
A = temp;


// new node
temp = new node();
temp->data = 4;
temp->link = NULL;

// add new node to linked list
node* temp1 = A;
while (temp1->link != NULL) {
    temp1 = temp1->link;
}
temp1->link = temp;

/* Address of head node, A, is never modified */
