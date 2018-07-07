/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


 void find_ans(TreeNode *root,int &temp int &ans)
 {
     if(root==NULL)
     return ;

     find_ans(root->left,temp,ans) ;

     temp--;

     if(temp==0)
     {
         ans=root->val ;
         temp-- ;
        return ;
     }

     find_ans(root->right,temp,ans) ;
 }

int Solution::kthsmallest(TreeNode* root, int B) {

    int temp=B;
    int ans;

  find_ans(root,temp,ans);
   return ans;



}
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


 void find_ans(TreeNode *root,int &temp int &ans)
 {
     if(root==NULL)
     return ;

     find_ans(root->left,temp,ans) ;

     temp--;

     if(temp==0)
     {
         ans=root->val ;
         temp-- ;
        return ;
     }

     find_ans(root->right,temp,ans) ;
 }

int Solution::kthsmallest(TreeNode* root, int B) {

    int temp=B;
    int ans;

  find_ans(root,temp,ans);
   return ans;



}

