#include <iostream>
using namespace std;

// Definition of ListNode
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Merge Two Sorted Lists (Recursive)
class Solution {
public:
   ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
       if (head1 == NULL || head2 == NULL) {
           return head1 == NULL ? head2 : head1;
       }

       if (head1->val <= head2->val) {
           head1->next = mergeTwoLists(head1->next, head2);
           return head1;
       } else {
           head2->next = mergeTwoLists(head1, head2->next);
           return head2;
       }
   }
};

// Utility to print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // List 1: 1 -> 3 -> 5
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(3);
    head1->next->next = new ListNode(5);

    // List 2: 2 -> 4 -> 6
    ListNode* head2 = new ListNode(2);
    head2->next = new ListNode(4);
    head2->next->next = new ListNode(6);

    Solution s;
    ListNode* merged = s.mergeTwoLists(head1, head2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}
