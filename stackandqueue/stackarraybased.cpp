#include<iostream>
#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void Push(int x) {
    if (top == MAX_SIZE - 1) {
        std::cout << "Error: Stack Overflow\n";
        return;
    }
    A[++top] = x;
}

void Pop() {
    if (top == -1) {
        std::cout << "Error: No element to pop\n";
        return;
    }
    top--;
}

int Top() {
    return A[top];
}

void Print() {
    std::cout << "Stack: ";
    for (int i = 0; i <= top; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(12); Print();
}