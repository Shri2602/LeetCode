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
 #include<bits/stdc++.h>
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;

        // Initialize a pointer to traverse the linked list
        ListNode *h = head ;

        // Create a vector to store the values of the linked list nodes
        vector<int> v ;

        // Step 1: Extract values from the linked list
        while( h ){
            int val = h->val ;
            v.push_back(val);
            h = h->next ;
        }

        // Step 2: Sort the vector in ascending order
        sort( v.begin(), v.end() ) ;

        // Reset the pointer to the head of the linked list
        h = head;

        // Initialize an index variable to access values from the sorted vector
        int i = 0;

        // Step 3: Update linked list nodes with sorted values
        while(h){
            h->val = v[i];
            h = h->next;
            i++;
        }

        // Return the head of the sorted linked list
        return head;
}
    
};