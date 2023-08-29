/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt =0;
        ListNode* p = head;
        while(p){
            cnt++;
            p = p->next;
        }
        cnt = cnt/2;
        p = head;
        while(cnt>0){
            p = p->next;
            cnt--;
        }
        return p;
    }
};