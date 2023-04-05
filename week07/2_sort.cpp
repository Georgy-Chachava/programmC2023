#include <iostream>

struct Node {
    int key = 0;
    Node* prev;
    Node* next;
};

struct List {
    Node* HEAD = nullptr;
    Node* TAIL = nullptr;
    Node* NIL = nullptr;
    size_t size = 0;
};

List* create_empty_list() {
    List* list = new List;
    list->NIL = new Node;
    list->HEAD = list->NIL;
    list->TAIL = list->NIL;
    return list;
}

List* push_front(List* list_ptr, int new_key) {
    Node* a = new Node;
    a->key = new_key;
    if ((list_ptr->HEAD == list_ptr->NIL) and (list_ptr->TAIL == list_ptr->NIL)) {
        a->next = list_ptr->NIL;
        a->prev = list_ptr->NIL;
        list_ptr->HEAD = a;
        list_ptr->TAIL = a;
    } else {
        a->next = list_ptr->HEAD;
        a->prev = list_ptr->NIL;
        list_ptr->HEAD->prev = a;
        list_ptr->HEAD = a;
    }
    list_ptr->size++;
    return list_ptr;
}

List* push_back(List* list_ptr, int new_key) {
    Node* a = new Node;
    a->key = new_key;
    if ((list_ptr->HEAD == list_ptr->NIL) and (list_ptr->TAIL == list_ptr->NIL)) {
        a->next = list_ptr->NIL;
        a->prev = list_ptr->NIL;
        list_ptr->HEAD = a;
        list_ptr->TAIL = a;
    } else {
        a->next = list_ptr->NIL;
        a->prev = list_ptr->TAIL;
        list_ptr->TAIL->next = a;
        list_ptr->TAIL = a;
    }
    list_ptr->size++;
    return list_ptr;
}

List* insert_after(List* list_ptr, Node* prev_ptr, int new_key) {
    if (prev_ptr == nullptr) {
        return list_ptr;
    }
    Node* a = new Node;
    a->key = new_key;
    if ((list_ptr->HEAD == list_ptr->NIL) and (list_ptr->TAIL == list_ptr->NIL)) {
        a->next = list_ptr->NIL;
        a->prev = list_ptr->NIL;
        list_ptr->HEAD = a;
        list_ptr->TAIL = a;
    } else {
        Node* b = prev_ptr->next;
        prev_ptr->next = a;
        a->next = b;
    }
    list_ptr->size++;
    return list_ptr;
}

void print_list(const List* list_ptr) {
    if (list_ptr == nullptr){
        return;
    }
    if (list_ptr->HEAD == list_ptr->TAIL) {
        std::cout << list_ptr->HEAD->key << std::endl;
        return;
    }
    Node* a = list_ptr->HEAD;
    while (a->next != list_ptr->NIL) {
        std::cout << a->key << ' ';
        a = a->next;
    }
    std::cout << a->key << std::endl;
}

void clear_list(List* list_ptr) {
    if (list_ptr == nullptr) {
        return;
    }
    Node* a = list_ptr->HEAD;
    while (a != list_ptr->TAIL) {
        Node* b = a->next;
        delete a;
        list_ptr->size--;
        a = b;
    }
    delete a;
    list_ptr->size--;
    list_ptr->HEAD = list_ptr->NIL;
    list_ptr->TAIL = list_ptr->NIL;
    return;
}

void destroy_list(List* list_ptr) {
    if (list_ptr == nullptr) {
        return;
    }
    Node* a = list_ptr->HEAD;
    for (size_t s = 0; s < list_ptr->size; s++) {
        Node* b;
        if (a->next != list_ptr->NIL) {
            b = a;
            a = a->next;
            delete b;
        } else {
            delete a;
        }
    }
    delete list_ptr;
    delete list_ptr->NIL;
    return;
}

Node* find_key(List* list_ptr, int key) {
    if (list_ptr->HEAD->key == key) {
        return list_ptr->HEAD;
    }
    Node* a = list_ptr->HEAD;
    while (a->next != list_ptr->NIL) {
        if (a->next->key == key) {
            return a->next;
        }
        a = a->next;
    }
    return list_ptr->NIL;
}

void remove_key(List* list_ptr, int key) {
    int p = 0;
    if (list_ptr->HEAD == list_ptr->NIL) {
        return;
    }
    if (list_ptr->HEAD->key == key) {
        if (list_ptr->HEAD->next == list_ptr->NIL) {
            delete list_ptr->HEAD;
            list_ptr->size--;
            list_ptr->HEAD = list_ptr->NIL;
            list_ptr->TAIL = list_ptr->NIL;
            return;
        }
        Node* a = list_ptr->HEAD->next;
        delete list_ptr->HEAD;
        list_ptr->size--;
        a->prev = list_ptr->NIL;
        list_ptr->HEAD = a;
    }
    Node* b = list_ptr->HEAD;
    while (b != list_ptr->NIL) {
        if (b->key == key) {
            if (b == list_ptr->TAIL) {
                p = 1;
            }
            Node* c = b->prev;
            Node* d = b->next;
            delete d;
            list_ptr->size--;
            c->next = d;
            d->prev = c;
            if (p == 1) {
                list_ptr->TAIL = b->prev;
            }
            return;
        }
        
        b = b->next;
    }

}

int main() {
    return 0;
}