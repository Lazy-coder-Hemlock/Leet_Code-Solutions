/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
    queue<TreeNode*>q;
    vector<int>v;
    int k=0;
public:
    BSTIterator(TreeNode* root) {
        if(!root)
            return;
        q.push(root);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            v.push_back(node->val);
            if(node->left)
                q.push(node->left);
                if(node->right)
                    q.push(node->right);
        }
        sort(v.begin(),v.end());
    }
    
    /** @return the next smallest number */
    int next() {
        return v[k++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return (k==v.size())?0:1;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
