
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int postindex ;

unordered_map<int,int>mapp;


TreeNode* getTree(vector<int>&po,vector<int>&in,int start,int end)
{
  if(start<=end&&postindex>=0)
  {

   TreeNode* root=new TreeNode(po[postindex]) ;
    int index=mapp[root->val] ;
    postindex-- ;

    root->right= getTree(po,in,index+1,end) ;
    root->left = getTree(po,in,start,index-1) ;


  return root ;
  }
  return NULL;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {


    for(int i=0;i<A.size();i++)
    {
        mapp[A[i]]=i;
    }

    postindex=B.size()-1 ;

 return getTree(B,A,0,A.size()-1) ;
}
