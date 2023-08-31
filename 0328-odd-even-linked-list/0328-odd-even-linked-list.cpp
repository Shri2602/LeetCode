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
    ListNode* oddEvenList(ListNode* head) {
        ListNode * odd = nullptr;
        ListNode * oddTail = nullptr;
        ListNode * evenTail = nullptr;
        ListNode * even = nullptr;
        ListNode *curr = head;
        int cnt = 1;
        while(curr){
            if(cnt%2==1){
                if(!odd){
                    odd=oddTail=curr;
                }
                else{
                    oddTail->next = curr;
                    oddTail = curr;
                }
            }
            else{
                if(!even){
                    even = evenTail=curr;
                }
                else{
                    evenTail->next=curr;
                    evenTail=curr;
                }
            }
            curr = curr->next;
            cnt++;
        }
        if(oddTail){
            oddTail->next =even;
        }else return NULL;
        if(evenTail){
            evenTail->next =nullptr;
        } 
        return odd; 
    }
};