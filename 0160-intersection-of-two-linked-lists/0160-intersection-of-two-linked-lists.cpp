/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
    ListNode* p = firstHead;
    ListNode* q = secondHead;

    while (p != q) {
        // Check for null pointers
        if (p == nullptr) {
            p = secondHead;
        }
        else {
            p = p->next;
        }

        if (q == nullptr) {
            q = firstHead;
        }
        else {
            q = q->next;
        }
    }

    // At this point, p and q will either be the intersection node or nullptr
    return p;

    }
};