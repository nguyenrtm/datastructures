#include<iostream>
#include<stack>
#include<cstring>

void everse(char *C, int n) {
    std::stack<char> S;
    for (int i = 0; i < n; i++) {
        S.push(C[i]);
    }
    for (int i = 0; i < n; i++) {
        C[i] = S.top();
        S.pop();
    }
}

int main() {
    char C[51];
    std::cout << "Enter a string: ";
    std::cin >> C;
    Reverse(C, strlen(C));
    std::cout << "Output: " << C << "\n";
}