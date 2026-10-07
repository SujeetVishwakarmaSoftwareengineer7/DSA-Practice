#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }
};

int main() {

    // Input linked list: 1 -> 2 -> 3 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    Solution obj;

    ListNode* ans = obj.reverseList(head);

    // Print answer
    while (ans != NULL) {
        cout << ans->val << " ";
        ans = ans->next;
    }

    return 0;
}