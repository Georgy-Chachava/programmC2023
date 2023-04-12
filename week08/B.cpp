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