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
    unordered_map<int,int> m;
    vector<int> findMode(TreeNode* root) {
        vector<int> result;
        if(root==NULL)
            return result;
        inorder(root);
        int max=0;
        for(auto i: m){
            if(i.second>max){
                max = i.second;
                result.clear();
            }
            if(i.second>=max){
                result.push_back(i.first);
            }
        }
        return result;
    }
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        m[root->val]++;
        inorder(root->right);
    }
};
