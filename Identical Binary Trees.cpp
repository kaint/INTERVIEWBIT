
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* root1, TreeNode* root2) {
    if(root1==NULL&&root2==NULL)
    return 1;

    if(root1==NULL)
    return 0;
    if(root2==NULL)
    return 0;

    return (root1->val==root2->val)&&isSameTree(root1->left,root2->left)&&isSameTree(root1->right,root2->right) ;

}
