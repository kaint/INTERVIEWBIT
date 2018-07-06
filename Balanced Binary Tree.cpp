/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 class ans{
  public :
           bool smallans;
           int height;
  ans()
  {

    smallans=true ;
    height =0;
  }
};

ans find_ans(TreeNode *root)
{
  if(root==NULL)
    return  ans() ;

    ans leftans= find_ans(root->left) ;
    ans rightans=find_ans(root->right);

  if(leftans.smallans==false||rightans.smallans==false)
  {

    return leftans ;
  }

  if(abs(leftans.height-rightans.height)<=1)
  {

    ans temp;
     temp.height=1+max(leftans.height,rightans.height) ;
     temp.smallans=true ;

    return temp;
  }


  leftans.smallans=false ;
  rightans.smallans=false ;

  return leftans ;

}
int Solution::isBalanced(TreeNode* root) {
      if(root==NULL)
    return 0 ;

   if(find_ans(root).smallans)
   return 1;
   return 0;



}
