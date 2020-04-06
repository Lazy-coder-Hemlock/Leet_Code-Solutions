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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp=head;
        while(temp && temp->next){
            swap(temp->val,temp->next->val);
            temp=temp->next->next;
        }
        return head;
    }
};
