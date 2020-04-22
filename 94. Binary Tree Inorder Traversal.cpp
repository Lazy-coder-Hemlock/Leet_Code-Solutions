/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
     vector<int>v;
        if(!root)
            return v;
        stack<TreeNode*>st;
        auto node=root;
        while(!st.empty() || node!=NULL){
            while(node!=NULL){
                st.push(node);
                node=node->left;            
        }
            node=st.top();
            st.pop();
            v.push_back(node->val);
            node=node->right;
    }
        return v;
    }
};
