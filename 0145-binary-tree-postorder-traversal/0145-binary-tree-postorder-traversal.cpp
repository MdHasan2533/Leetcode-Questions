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
private:
    void postorder( TreeNode* root, vector<int> &n){
        if(root == NULL){
            return ;
        }
        
        postorder(root -> left, n);
        postorder(root -> right, n);
        n.push_back(root -> val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> n;
        postorder(root, n);
        return n;
    }
};