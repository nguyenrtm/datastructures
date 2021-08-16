#include<iostream>

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data) {
    if (root == NULL) {
        root = GetNewNode(data);
    }
    else if (data <= root->data) root->left = Insert(root->left, data);
    else root->right = Insert(root->right, data);
    return root;
}

void Preorder(BstNode* root) {
    if (root == NULL) return;
    std::cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main() {
    BstNode* root;
    root = NULL;
    root = Insert(root, 8);
    root = Insert(root, 7);
    root = Insert(root, 15);
    root = Insert(root, 20);
    root = Insert(root, 1);
    Preorder(root);
}