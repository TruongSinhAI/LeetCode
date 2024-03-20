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
    int count =0;
    void find(TreeNode* root, int x){
        if (root==NULL){
            return;
        }
        if (root->val >= x){
            count ++;
            x = root->val;
        }
        find(root->left, x);
        find(root->right, x);
    }
    int goodNodes(TreeNode* root) {
        // int ans = find(root, root->val, 0);
        find(root, root->val);
        return count ;
    }
};