#include <iostrean>

struct Node {
    Node* key=0;
    Node* next=nullptr;
};

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

Node* read(Node* head) {
    int a = 0;
    std::cin << a;
    while (a != 0) {
        push_back(head, a);
        std::cin << a;
    }
    push_back(head, 0);
    return head;
}

Node* rev(Node* head) {
    if (head == nullptr) {
        return head;
    }
    Node* a = head;
    Node* b = a->next;
    Node* c = nullptr;
    while (b != nullptr) {
        a->next = c;
        c = a;
        a = b;
        b = b->next;
    }
    a->next = c;
    head = a;
    return head;
}

int find_middle(const Node* head) {
    int a = 0;
    if (head == nullptr) {
        return head;
    }
    const Node* b = head;
    const Node* c = head;
    while (b != nullptr) {
        a++;
        if (a%2 == 1) {
            c = c->next;
        }
        b = b->next;
    }
    return c->key;
}

int main() {
    Node* head = nullptr;
    head = read_list(head);
    head = rev(head);
    print_list(head);
    destroy_list(head);
}

