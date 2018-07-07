
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int check(TreeNode *root,int val1)
 {
     if(root==NULL)
     return 0;
     if(root->val==val1)
     return 1 ;
     return check(root->left,val1)||check(root->right,val1) ;
  }

  int find_ans(TreeNode*root,int a,int b)
  {
      if(root==NULL)
        return -1 ;

      if(root->val==a||root->val==b)
      return root->val ;

    int leftans=find_ans(root->left,a,b);
    int rightans=find_ans(root->right,a,b) ;

    if(leftans!=-1&&rightans!=-1)
    {
        return root->val ;
    }
    if(leftans!=-1)
    return leftans ;
    return rightans ;


  }
int Solution::lca(TreeNode* root, int B, int C) {

    if(check(root,B)==0||check(root,C)==0)
    {
        return -1;
    }

    return find_ans(root,B,C) ;


}
