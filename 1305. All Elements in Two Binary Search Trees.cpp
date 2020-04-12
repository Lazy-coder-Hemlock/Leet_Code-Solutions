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
    vector<int>v;
public:
    void tree(TreeNode *root){
        if(root==NULL)
            return;
   tree(root->left);
    tree(root->right);
         v.push_back(root->val);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
   tree(root1);
        tree(root2);
        sort(v.begin(),v.end());
    return v;
    }
};
