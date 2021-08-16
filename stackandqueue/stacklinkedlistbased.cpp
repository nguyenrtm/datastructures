// creating stack using linked list

#include<iostream>

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void Push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;

    top = temp;
}

void Pop() {
    Node* temp;
    if (top == NULL) return;
    temp = top;
    top = top->next;
    free(temp);
}

void Print() {
    Node* temp = top;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp=temp->next;
    }
    std::cout << "\n";
}

int main() {
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(8); Print();
}