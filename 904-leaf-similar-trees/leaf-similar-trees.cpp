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
    void find(TreeNode* root, vector<int>& ans){
        if (root == nullptr){
            return;
        }
        find(root->left, ans);
        find(root->right, ans);
        if (root->left == nullptr && root->right == nullptr){
            ans.push_back(root->val);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> s1, s2;
        find(root1, s1);
        find(root2, s2);
        if (s1==s2) return true;
        return false;
    }
};