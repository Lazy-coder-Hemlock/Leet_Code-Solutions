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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        ListNode *curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
        ListNode *current=head;
        int k=0;
        while(current!=NULL)
        {
            current->val=v[k];
            k++;
            current=current->next;
        }
        return head;
    }
};
