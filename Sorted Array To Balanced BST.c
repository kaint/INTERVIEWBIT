
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


TreeNode* constructTree(const vector<int>&input,int s,int r)
{

  if(s<=r)
  {
    int mid=(s+r)/2 ;

  TreeNode* head=new TreeNode(input[mid] ) ;

    head->left= constructTree(input,s,mid-1) ;
    head->right=constructTree(input,mid+1,r ) ;
    return head ;

  }
  return NULL;

}


TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


 return constructTree(A,0,A.size()-1) ;



}
