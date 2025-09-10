#include <bits/stdc++.h>
using namespace std;

// Definition for a Node
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        unordered_map<Node*, Node*> m;

        // Step 1: Create all new nodes
        Node* oldTemp = head;
        while (oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            oldTemp = oldTemp->next;
        }

        // Step 2: Connect next and random
        oldTemp = head;
        while (oldTemp != NULL) {
            m[oldTemp]->next = m[oldTemp->next];
            m[oldTemp]->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
        }

        // Step 3: Return head of copied list
        return m[head];
    }
};

// Helper function to print list (val + random->val)
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Node val = " << temp->val;
        if (temp->random) cout << ", Random val = " << temp->random->val;
        else cout << ", Random val = NULL";
        cout << endl;
        temp = temp->next;
    }
}

int main() {
    // Create nodes
    Node* n1 = new Node(7);
    Node* n2 = new Node(13);
    Node* n3 = new Node(11);
    Node* n4 = new Node(10);
    Node* n5 = new Node(1);

    // Connect next pointers
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // Connect random pointers
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;

    cout << "Original List:\n";
    printList(n1);

    Solution sol;
    Node* copiedHead = sol.copyRandomList(n1);

    cout << "\nCopied List:\n";
    printList(copiedHead);

    return 0;
}
