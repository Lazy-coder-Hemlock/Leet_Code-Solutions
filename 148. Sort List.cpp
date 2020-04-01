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
    ListNode* sortList(ListNode* head) {
        ListNode *curr;
        curr=head;
        vector<int>v;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        ListNode *firse;
        firse=head;
        sort(v.begin(),v.end());
        int i=0;
        while(firse!=NULL){
            firse->val=v[i];
            firse=firse->next;
            i++;
        }
        return head;
    }
};
