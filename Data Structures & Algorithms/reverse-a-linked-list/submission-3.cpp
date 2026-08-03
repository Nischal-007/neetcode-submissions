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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;//Tracks the previous node
        ListNode* curr=head; //Tracks the current node
        while(curr){
            ListNode* temp=curr->next;//Save next node
            curr->next=prev;//Reverse the Link
            prev=curr;//Move prev forward
            curr=temp;//Move curr forward
        }
        return prev;// New head of reversed list
    }
};
