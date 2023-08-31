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
    int length(ListNode* head){
        int cnt =0;
        while(head){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)return NULL;
        if(head->next->next==NULL){
            head->next =NULL;
            return head;
        }
        ListNode* p = head;
        ListNode* q = p->next;
        int cnt = length(head);
        for(int i =1;i<cnt/2;i++){
            p = p->next;
            q = q->next;
        }
        p->next=q->next;
        return head;
    }
};