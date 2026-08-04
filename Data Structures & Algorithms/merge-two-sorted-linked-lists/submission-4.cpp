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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);// Dummy node to simplify handling the head
        ListNode* node=&dummy; // Pointer used to build the merged list

        while(list1 && list2){
            if(list1->val < list2->val){
                node->next=list1;// Attach list1’s node
                list1=list1->next;// Move list1 forward
            }else{
                node->next=list2;// Attach list2’s node
                list2=list2->next;// Move list2 forward
            }
            node=node->next;// Advance the merged list pointer
        }// Attach whichever list still has nodes left
        if(list1){
            node->next=list1;
        }else{
            node->next=list2;
        }
        return dummy.next;// Return merged list starting after dummy
    }
};
