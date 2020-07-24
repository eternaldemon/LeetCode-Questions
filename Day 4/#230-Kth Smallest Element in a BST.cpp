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
    vector<int> traversal;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return NULL;
        //Remember that an inorder array is a sorted array
        inorder(root);
            return traversal[k-1];
    }
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        traversal.push_back(root->val);
        inorder(root->right);
    }
};
