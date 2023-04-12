#include <iostream>

struct Node {
    int key=0;
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
    std::cin >> a;
    while (a != 0) {
        push_back(head, a);
        std::cin >> a;
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

int find_middle(const Node *head) {
    int a = 1;
    if (head == nullptr) {
        return 0;
    }
    const Node *b = head;
    const Node *c = head;
    while (b != nullptr) {
        a++;
        if (a % 2 == 1) {
            c = c->next;
        }
        b = b->next;
    }
    return c->key;
}

Node* mergeTwoLists(Node* list1, Node* list2) {
    if (list1 == nullptr) {
        return list2;
    }
    if (list2 == nullptr) {
        return list1;
    }
    Node* a1 = list1;
    Node* a2 = list2;
    while (a2 != nullptr) {
        while ((a2->data > a1->data) and (a1->next != nullptr)) {
            a1 = a1->next;
        }
        Node* b = a1->next;
        Node* el = new Node;
        a1->next = el;
        el->data = a2->data;
        el->next = b;
        a2 = a2->next;
    }
    return list1;
}

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
    head = read(head);
    head = rev(head);
    print_list(head);
    destroy_list(head);
}

