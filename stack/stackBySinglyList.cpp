#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;

void insertEnd(int x) {
    Node *n = new Node{x, NULL, NULL};
    if (!head) { head = n; return; }

    Node *t = head;
    while (t->next) t = t->next;
    t->next = n;
    n->prev = t;
}

void deleteEnd() {
    if (!head) return;

    Node *t = head;
    while (t->next) t = t->next;

    if (t->prev) t->prev->next = NULL;
    else head = NULL;

    delete t;
}

void display() {
    for (Node *t = head; t; t = t->next)
        cout << t->data << " <-> ";
    cout << "NULL";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    cout << "List: ";
    display();

    deleteEnd();

    cout << "\nAfter deletion: ";
    display();
}