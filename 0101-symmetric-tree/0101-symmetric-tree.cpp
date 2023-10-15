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
    bool isMirror(TreeNode* leftroot, TreeNode* rightroot){
        if( leftroot == NULL && rightroot == NULL ) return true;
        if( leftroot == NULL && rightroot != NULL ) return false;
        if( leftroot != NULL && rightroot == NULL ) return false;
        if( leftroot -> val != rightroot -> val) return false;
        bool left = isMirror(leftroot -> left, rightroot -> right);
        bool right = isMirror(leftroot -> right, rightroot -> left);
        return (left && right);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror( root -> left, root -> right);
    }
};