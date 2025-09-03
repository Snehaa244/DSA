/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //Tortoise
 #include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           // slow 1 step
            fast = fast->next->next;     // fast 2 steps

            if (slow == fast) {          // pointers मिले → cycle है
                return true;
            }
        }
        return false; // fast NULL तक पहुँच गया → cycle नहीं है
    }
};

int main() {
    // Example: 1->2->3->4->2 (cycle at node 2)
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next; // cycle बनाना

    Solution s;
    cout << (s.hasCycle(head) ? "true" : "false");
    return 0;
}

// Naive approch using hashset
#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }
};

bool detectLoop(Node* head) {
    unordered_set<Node*>st;
  
    while (head != nullptr) {

        // if this node is already present
        // in hashmap it means there is a cycle
        if (st.find(head) != st.end())
            return true;

        // if we are seeing the node for
        // the first time, insert it in hash
        st.insert(head);

        head = head->next;
    }
    return false;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(4);
  
    head->next->next->next = head->next;

    if (detectLoop(head))
        cout << "true";
    else
        cout << "false";

    return 0;
}