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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* node;
        while(!q.empty()){
            node=q.front();
            q.pop();
            if(node->right)
                q.push(node->right);
            if(node->left)
                q.push(node->left);
        }
        return node->val;
        
    }
};
