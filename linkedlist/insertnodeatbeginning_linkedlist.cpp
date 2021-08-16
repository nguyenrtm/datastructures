#include<iostream>

// declaring the node structure
struct node {
    int data; 
    node* next;
};

node* head;

void Insert(int x);
void Print();

int main() {
    head = NULL;
    std::cout << "How many numbers?\n";
    int n,i,x;
    std::cin >> n;
    for (i=0;i<n;i++) {
        std::cout << "Enter the number\n";
        std::cin >> x;
        Insert(x);
        Print();
    }
}

void Insert(int x) {
    node* temp = new node();
    temp->data = x;
    temp->next = NULL;
    if (head != NULL) {
        temp->next = head;
    }
    head = temp;
}

void Print() {
    node* temp = head;
    std::cout << "List is: ";
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp=temp->next;
    }
    std::cout << "\n";
}

/* If you want to traverse a linked list, use a new temp node, then just use temp=temp->next  */