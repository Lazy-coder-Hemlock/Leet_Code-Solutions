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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *new_list=new ListNode(0);
        ListNode *dummy=new_list;
        int carry=0;
        while(l1 || l2 || carry){
            if(l1!=NULL){
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                carry+=l2->val;
                l2=l2->next;
            }
            dummy->next=new ListNode(carry%10);
            dummy=dummy->next;
            carry/=10;
        }
        return new_list->next;
    }
};
