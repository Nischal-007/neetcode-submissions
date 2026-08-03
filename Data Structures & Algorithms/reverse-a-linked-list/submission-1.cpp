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
        if(!head){
            return nullptr;//If head is nullptr, the list is empty
        }
        ListNode* newHead =head;//If the current node (head) has a next, you recursively call reverseList(head->next).
        if(head->next){
            newHead=reverseList(head->next);//recursively
            head->next->next=head;
        }
        head->next=nullptr;//break the recursion
        return newHead;
    }
};
