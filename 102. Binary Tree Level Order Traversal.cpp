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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(!root)
            return ans;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            vector<int>rev;
            int len=q.size();
            for(int i=0;i<len;i++){
                auto node=q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
      //      reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        
        return ans;
    }
};
