#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int new_data) {
       data = new_data;
       next = nullptr;
    }
};

Node *reverseList(Node *head) {
    if(head == NULL || head->next == NULL)
    return head;

    Node *rest = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return rest;
}
void printList(Node *node) {
    while (node != nullptr) {
        cout << node->data;
        if (node->next)
            cout << " -> ";
        node = node->next;
    }
}

int main() {

    // create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = reverseList(head);
    printList(head);

    return 0;
}