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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *curr=root;
        while(curr){
            if(curr->val==val)
                return root;
        else if(curr->val<val){
            return searchBST(curr->right,val);        }
        else{
            return searchBST(curr->left,val);
        }
    }
    return NULL;  
    }
};
