#include <iostream>

struct Node
{
    char key;
    Node *next;
};

void check_correct(Node* head) {
    if (head == nullptr) {
        return;
    }
    Node* a = head;
    Node* b = a->next;
    Node* c = nullptr;
    while (a->key != '\n') {
        b = new Node;
        b->key = std::getchar();
        if (a->key == b->key) {
            std::cout << "NO" << std::endl;
            return;
        }
        b->next = nullptr;
        c = a;
        b = b->next;
    }
    if (c->key == '(') {
        std::cout << "NO" << std::endl;
        return;
    }
    std::cout << "YES" << std::endl;
    return;
}

int main() {
    Node *head  = nullptr;
    check_correct(head);
    return 0;
}