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
public:
    int findMax(TreeNode* root, int &maxi){

        if( root == NULL ){
            return 0;
        }

        int left = findMax(root -> left, maxi);
        int right = findMax( root -> right, maxi);

        if( left < 0){
            left = 0;
        }
        if( right < 0){
            right = 0;
        }

        maxi = max(maxi, left + right + root -> val);
        return max(left,right) + root -> val;

    } 
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        findMax(root, maxi);
        return maxi;
    }
};