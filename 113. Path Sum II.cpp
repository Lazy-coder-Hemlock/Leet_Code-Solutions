/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int>temp;
    vector<vector<int>>store;
    vector<vector<int>>result;
    void paths(TreeNode *root,vector<int>temp,vector<vector<int>>&store){
        if(!root)
            return;
        temp.push_back(root->val);
        if(!root->left && !root->right)
            store.push_back(temp);
        paths(root->left,temp,store);
        paths(root->right,temp,store);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        paths(root,temp,store);
        for(auto path:store){
            int val=0;
            val=accumulate(path.begin(),path.end(),0);
            if(val==sum)
                result.push_back(path);
        }
        return result;
    }
};
