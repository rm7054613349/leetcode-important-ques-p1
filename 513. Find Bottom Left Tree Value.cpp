class Solution {
public:
    int findBottomLeftValue(TreeNode* root) 
    {
        queue<TreeNode*>q;
        TreeNode*front;
        q.push(root);
        while(q.size()!=0)
        {
             front=q.front();
             q.pop();
             if(front->right!=NULL)
             q.push(front->right);
             if(front->left)
             q.push(front->left);
        }
        return front->val;
    }
};