#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

struct Node{
    std::string key;
    Node* next = nullptr;
};

void destroy_list(Node* &head_ref){
    if (head_ref == nullptr){
        return;
    }
    Node* a1 = head_ref;
    Node* a2 = a1;
    while (a1->next != head_ref){
        a2 = a1;
        a1 = a1->next;
        delete a2;
    }
    delete a1;
}

void push_circle(Node* &head, std::string new_key){
    if (head == nullptr){
        head = new Node;
        head->key = new_key;
        head->next = head;
        return;
    }
    Node* c = head;
    while (c->next != head){
        c = c->next;
    }
    c->next = new Node;
    c->next->next = head;
    c->next->key = new_key;
}

Node* read(Node* head=nullptr){
    std::string t;
    int l = 0;
    cin >> l;
    while (l > 0){
        cin >> t;
        push_circle(head, t);
        l--;
    }
    return head;
}

std::string tld(Node*& head_ref, int k){
    Node* t =  head_ref;
    if (t == t->next){
        std::string n = t->next->key;
        return n;
    }
    for (int i = 0; i < k-3; i++){
        t = t->next;
    }
    head_ref = t->next->next;
    std::string m = t->next->key;
    delete t->next;
    t->next = head_ref;
    return m;
}

int Flaviy(Node* &head, int k, std::string name){
    int s = 1;
    std::string n = tld(head, k);
    while (n != name){
        n = tld(head, k);
        s++;
    }
    return s;
}

int main(){
    Node* head = read();
    int p = 0;
    cin >> p;
    std::string a;
    cin >> a;
    cout << Flaviy(head, p, a) << endl;
    destroy_list(head);
    return 0;
}