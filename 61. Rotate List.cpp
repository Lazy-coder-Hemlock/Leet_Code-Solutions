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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return NULL;
        vector<int>v;
        ListNode *curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        ::rotate(v.begin(),v.begin()+v.size()-(k%v.size()),v.end());
        ListNode *cur=head;
        int p=0;
        while(cur!=NULL){
            cur->val=v[p];
            p++;
            cur=cur->next;
        }
        return head;
    }
};
