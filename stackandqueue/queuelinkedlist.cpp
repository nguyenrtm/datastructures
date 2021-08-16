// queue implementation using linked list

#include<iostream>

struct Node {
    int data; 
    Node* next;
};

Node* head;

void Enqueue(int x) {
    Node* temp1 = new Node();
    temp1->data = x;
    temp1->next = NULL;

    Node* temp2 = head;
    if (head == NULL) {
        head = temp1;
        return;
    }
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

void Dequeue() {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
}

void Print() {
    Node* temp = head;
    std::cout << "List is: ";
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp=temp->next;
    }
    std::cout << "\n";
}

Node* Top() {
    std::cout << head->data << "\n";
    return head;
}

int main() {
    Enqueue(5); Print();
    Enqueue(4); Print();
    Enqueue(16); Print();
    Top();
    Dequeue(); Print();
    Dequeue(); Print();
    Enqueue(2); Print();
}