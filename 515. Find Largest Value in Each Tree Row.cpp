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
    vector<int> largestValues(TreeNode* root) {
     queue<TreeNode*>q;
        vector<int>res;
        if(!root)
            return res;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
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
            int r=*max_element(v.begin(),v.end());
            res.push_back(r);
        }
        return res;
    }
};
