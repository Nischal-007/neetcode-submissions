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
    void reorderList(ListNode* head) {
        if(!head) return;                 // Edge case: empty list
        vector<ListNode*> nodes;          // Store all nodes in a vector
        ListNode* cur = head;
        while(cur){
            nodes.push_back(cur);         // Collect nodes sequentially
            cur = cur->next;
        } 
        int i = 0, j = nodes.size() - 1;  // Two pointers: start and end
        while(i < j){
            nodes[i]->next = nodes[j];    // Link front → back
            i++;
            if(i >= j) break;             // Stop if pointers meet
            nodes[j]->next = nodes[i];    // Link back → next front
            j--;
        }
        nodes[i]->next = nullptr;         // Terminate the list
    }
};
