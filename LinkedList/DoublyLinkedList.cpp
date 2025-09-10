#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

// Doubly Linked List class
class DoublyList {
    Node* head;
    Node* tail;

public:
    DoublyList() {
        head = tail = NULL;
    }

    // Insert at end
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) { // list empty
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Insert at front
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) { // list empty
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Delete from end
    void pop_back() {
        if (tail == NULL) return; // empty
        if (head == tail) { // only one node
            delete tail;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
    }

    // Delete from front
    void pop_front() {
        if (head == NULL) return; // empty
        if (head == tail) { // only one node
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }

    // Insert at given position (0-based)
    void insert(int pos, int val) {
        if (pos == 0) {
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        int count = 0;

        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL || temp->next == NULL) {
            push_back(val);
        } else {
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
    }

    // Search element
    bool search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }

    // Display list
    void display() {
        Node* temp = head;
        cout << "List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to test
int main() {
    DoublyList dl;

    dl.push_back(10);
    dl.push_back(20);
    dl.push_back(30);
    dl.display(); // 10 20 30

    dl.push_front(5);
    dl.display(); // 5 10 20 30

    dl.pop_back();
    dl.display(); // 5 10 20

    dl.pop_front();
    dl.display(); // 10 20

    dl.insert(1, 15); // insert at position 1
    dl.display(); // 10 15 20

    cout << (dl.search(15) ? "Found" : "Not Found") << endl;
    cout << (dl.search(100) ? "Found" : "Not Found") << endl;

    return 0;
}



// push_back(val)

// Agar list empty hai → head & tail dono newNode ho jaayenge.

// Warna → tail ke baad newNode add hoga, aur tail update ho jaayegi.

// push_front(val)

// Agar list empty hai → head & tail dono newNode.

// Warna → head ke pehle newNode add hoga aur head update ho jaayegi.

// pop_back()

// Agar list empty hai → kuch mat karo.

// Agar ek node hai → delete karke head & tail NULL.

// Warna → tail ko peeche move karo aur last node delete karo.

// pop_front()

// Agar list empty hai → kuch mat karo.

// Agar ek node hai → delete karke head & tail NULL.

// Warna → head ko aage move karo aur first node delete karo.

// insert(pos, val)

// Agar pos = 0 → push_front call karo.

// Agar pos list ke end ya usse aage → push_back call karo.

// Otherwise → beech me newNode insert karo aur prev/next adjust karo.

// search(key)

// Head se tail tak traverse karke check karo.

// Agar mil gaya → true return, nahi to false.

// display()

// Head se tail tak traverse karke saare nodes print karo.
