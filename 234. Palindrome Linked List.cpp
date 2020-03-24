class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode *temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode *temp1=head;
        while(!st.empty()){
            if(st.top()!=temp1->val)
                return false;
        else{
            st.pop();
            temp1=temp1->next;
        }
    }
        return true;
    }
};
