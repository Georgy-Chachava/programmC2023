#include <iostream>

struct Node {
    int data=0;
    char t;
    char key;
    Node* next=nullptr;
};

void destroy_list(Node*& head_ref) {
    Node* new_node = head_ref;
    while (head_ref != nullptr) {
        head_ref = new_node->next;
        delete new_node;
        new_node = head_ref;
    }
    return;
}

void check_brack(Node* head) {
    Node* a = head;
    Node* b = a->next;
    Node* c = nullptr;
    while (a->key != '\n') {
        b = new Node;
        b->key = std::getchar();
        if ((b->key == '}') or (b->key == '>') or (b->key == ']') or (b->key == ')')) {
            b->data = 0; 
        } else {
            b->data = 1;
        }
        if ((b->key == '(') or (b->key == ')')) {
            b->t = '1';
        }
        if ((b->key == '{') or (b->key == '}')) {
            b->t = '2';
        }
        if ((b->key == '[') or (b->key == ']')) {
            b->t = '3';
        }
        if ((b->key == '<') or (b->key == '>')) {
            b->t = '4';
        }
        if ((a->data == b->data) or ((a->data == 1) and a->t != b->t)) {
            std::cout << "NO" << std::endl;
            return;
        }
        b->next = nullptr;
        c = a;
        a = b;
        b = b->next;
    }
    if (c->data == 1) {
        std::cout << "NO" << std::endl;
        return;
    }
    std::cout << "YES" << std::endl;
    return;
}

int main() {
    Node* head = nullptr;
    check_brack(head);
    destroy_list(head);
    return 0;
}