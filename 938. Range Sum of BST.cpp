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
  
  void solve(TreeNode* root, int low, int high,vector<int>&v)
  {
      if(root==NULL)
      return;

     if(root->val>=low&&root->val<=high)
      v.push_back(root->val);

      solve(root->left,low,high,v);
      solve(root->right,low,high,v);
  }

    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        vector<int>v;
         solve( root,low,high,v);

         int sum=0;
         for(int i=0;i<v.size();i++)
         {
             sum=sum+v[i];
         }

         return sum;
    }
};