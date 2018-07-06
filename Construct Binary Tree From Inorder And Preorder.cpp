
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


/***************/
int postindex ;


int find_index(vector<int>&in,int start,int end,int data)
{
    while(start<=end)
    {
        if(in[start]==data)
            return start ;
        start++ ;
    }
    return 0;
}

BinaryTreeNode<int>* getTree(vector<int>&po,vector<int>*in,int start,int end)
{
  if(start<=end&&postindex>=0)
  {

    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(po[postindex]) ;

    int index=find_index(in,start,end ,root->data) ;
    postindex-- ;


    root->right= getTree(po,in,index+1,end) ;
    root->left = getTree(po,in,start,index-1) ;


  return root ;
  }


  return NULL;
}


TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {

    postindex=postLength-1 ;
 return getTree(postorder,inorder,0,inLength-1) ;

}
