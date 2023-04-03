#include <iostrean>

struct Node {
    Node* key=0;
    Node* next=nullptr;
};

void push_front(Node*& head_ref, int new_data) {
    if (head_ref == nullptr) {
        head_ref = new Node;
        head_ref->key = new_data;
        return;
    }
    Node* new_node = new Node;
    new_node->key = new_data;
    new_node->next = head_ref;
    head_ref = new_node;
}

void push_back(Node*& head_ref, int new_data) {
    if (head_ref == nullptr) {
        head_ref = new Node;
        head_ref->key = new_data;
        return;
    }
    Node* new_node = head_ref;
    while (new_node->next != nullptr) {
        new_node = new_node->next;
    }
    new_node->next = new Node;
    new_node->next->key = new_data;
}

void insert_after(Node*& prev_ref, int new_data) {
    if (prev_ref == nullptr) {
        return;
    }
    Node* new_node = new Node;
    new_node->key = new_data;
    new_node->next = prev_ref->next;
    prev_ref->next = new_node;
}

void destroy_list(Node*& head_ref) {
    Node* new_node = head_ref;
    while (head_ref != nullptr) {
        head_ref = new_node->next;
        delete new_node;
        new_node = head_ref;
    }
    return;
}

void print_list(Node *head_ref) {
    if (head_ref == nullptr) {
        std::cout << std::endl;
        return;
    }
    Node *a = head_ref;
    if (a->next == nullptr) {
        std::cout << a->key << std::endl;
        return;
    }
    while (a->next != nullptr) {
        std::cout << a->key << ' ';
        a = a->next;
    }
    std::cout << a->key << std::endl;
    return;
}

Node* find(Node* head_ref, int key) {
    while ((head_ref != nullptr) and (head_ref->key != key)) {
        head_ref = head_ref->next;
    }
    return head_ref;
}

void remove_key(Node* &head_ref, int key) {
    Node* a = head_ref;
    if (a == nullptr) {
        return;
    }
    if (a->key == key) {
        delete head_ref;
        head_ref = a->next;
    }
    while ((a-> next != nullptr) and (a->next->key != key)) {
        a = a->next;
    }
    if (a->next != nullptr) {
      Node* b = a->next;
      a->next = b->next;
      delete b;
    } 
}

int main() {
    return;
}