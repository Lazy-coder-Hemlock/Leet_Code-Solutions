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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode *>q;
        if(root==NULL)
            return false;
        int store=root->val;
        q.push(root);
        while(!q.empty()){
            TreeNode *node=q.front();
            q.pop();
            if(node->val!=store)
                return false;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        return true;
        
    }
};
