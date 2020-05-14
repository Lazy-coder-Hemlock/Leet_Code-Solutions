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
    int getMinimumDifference(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>v;
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            v.push_back(node->val);
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        int m=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                m=min(m,abs(v[i]-v[j]));
            }
        }
        return m;
    }
};
