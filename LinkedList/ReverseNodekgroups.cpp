#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        // Step 1: Check if k nodes exist
        ListNode* temp = head;
        int cnt = 0;
        while (cnt < k && temp) {
            temp = temp->next;
            cnt++;
        }
        if (cnt < k) return head;  // Not enough nodes, return as is

        // Step 2: Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        cnt = 0;
        while (cnt < k && curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }

        // Step 3: Recursively reverse remaining list
        if (next) {
            head->next = reverseKGroup(next, k);
        }

        // prev is new head of this reversed group
        return prev;
    }
};

// Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create linked list from array
ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    // Input list
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    ListNode* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}
