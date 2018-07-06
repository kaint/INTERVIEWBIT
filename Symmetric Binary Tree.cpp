
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int find_ans(TreeNode* root1,TreeNode* root2)
 {
     if(root1==NULL&&root2==NULL)
     return 1;

     if(root1==NULL)
     return 0;
     if(root2==NULL)
     return 0;

     return (root1->val==root2->val)&&find_ans(root1->left,root2->right)&&find_ans(root1->right,root2->left) ;

 }

int Solution::isSymmetric(TreeNode* root) {
    if(root==NULL)
    return 1;
    return find_ans(root->left,root->right) ;
}
