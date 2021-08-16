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
        return root;
    }
    else if (data <= root->data) root->left = Insert(root->left, data);
    else if (data > root->data) root->right = Insert(root->right, data);
    return root;
}

/* Finding predecessor:
Case 1: if there is left subtree -> left subtree is predecessor
Case 2: if there is no left subtree -> nearest ancestor which node 
is right subtree of

Step 1: Find node
Step 2: 
*/

BstNode* FindNode(BstNode* root, int data) {
    BstNode* temp = new BstNode();
    if (data == root->data) {
        return root;
    }
    else if (data < root->data) root->left = FindNode(root->left, data);
    else if (data > root->data) root->right = FindNode(root->right, data);
    return temp;
}

BstNode* FindMax(BstNode* root) {
    if (root == NULL) return NULL;
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

BstNode* Predecessor(BstNode* root, int data) {
    BstNode* temp = FindNode(root, data);
    if (temp == NULL) return NULL;
    if (temp->left != NULL) {
        return FindMax(temp->left);
    }
    else {
        BstNode* predecessor = NULL;
        BstNode* ancestor = root;
        while (ancestor != temp) {
            if (data > ancestor->data) {
                predecessor = ancestor;
                ancestor = ancestor->right;
            }
            if (data < ancestor->data) {
                ancestor = ancestor->left;
            }
        }
        return predecessor;
    }
}

int main() {
    using namespace std;
    BstNode* root;
    root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
}