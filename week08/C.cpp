#include <iostream>

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