
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int sum ) {

    if(root==NULL)
    {
          if(sum==0)
          return 1;
          return 0 ;
    }

       bool ans = 0;

       int subSum = sum - root->val;


      ans =hasPathSum(root->left, subSum) || hasPathSum(root->right, subSum);

    return ans;


}
