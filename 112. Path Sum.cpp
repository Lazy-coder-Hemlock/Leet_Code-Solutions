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
    vector<int>temp;
    vector<vector<int>>store;
    void paths(TreeNode *root,vector<int>temp,vector<vector<int>>&store){
        if(root==NULL)
        return;
        temp.push_back(root->val);
        if(root->left==NULL and root->right==NULL){
            store.push_back(temp);
        }
        paths(root->left,temp,store);
        paths(root->right,temp,store);
    }
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return 0;
        vector<int>v;
        paths(root,temp,store);
        for(auto path:store){
            int val=0;
            val=accumulate(path.begin(),path.end(),val);
            if(val==sum)
                return 1;
        }
        return 0;
    }
};
