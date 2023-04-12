#include <iostream>

struct Node {
    int data = 0;
    Node* left;
    Node* right;
};

void forward(Node* root) {
    if (root == nullptr) {
        return;
    }
    std::cout << root->data << ' ';
    forward(root->left);
    forward(root->right);
}

void sym(Node* root) {
    if (root == nullptr) {
        return;
    }
    sym(root->left);
    std::cout << root->data << ' ';
    sym(root->right);
}

void rev(Node* root) {
    if (root == nullptr) {
        return;
    }
    rev(root->left);
    rev(root->right);
    std::cout << root->data << ' ';
}

void push(int new_key, Node* root) {
    if (root == nullptr) {
        root = new Node;
        root->data = new_key;
        root->left = root->right = nullptr;
        return;
    }
    if (new_key > root->data) {
        push(new_key, root->left);
    } else {
        push(new_key, root->right);
    }
}

int main() {
    int a = 0;
    int b = 0;
    Node* t = nullptr;
    std::cin >> a;
    for (int i = 0; i < a; ++i) {
        std::cin >> b;
        push(b, t);
    }
    Node* ptr = t;
    while (ptr->left != nullptr) {
        ptr = ptr->left;
    }
    forward(ptr);
    sym(ptr);
    rev(ptr);
    return 0;
}