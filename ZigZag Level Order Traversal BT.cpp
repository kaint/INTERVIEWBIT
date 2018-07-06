
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) {

    vector<vector<int> >ans;

      if(root==NULL)
        return ans ;

    stack<TreeNode*>st1 ;
    stack<TreeNode*>st2 ;

    st1.push(root) ;

    int turn=0; // stack  1 turn

    while( (!st1.empty()) ||(!st2.empty()) )
    {vector<int>ans1 ;
        if(turn==0)
        {
            while(!st1.empty())
            {
                TreeNode *temp=st1.top() ;

                st1.pop() ;
                ans1.push_back(temp->val);
    //            cout<<(temp->data)<<" ";


                if(temp->left){
                   st2.push(temp->left);
                }


                if(temp->right)
                {
                    st2.push(temp->right) ;
                }



            }
            turn =1 ;
        }
        else{

            while(!st2.empty()) {

                    TreeNode *temp=st2.top() ;
                    st2.pop() ;

                ans1.push_back(temp->val) ;

               //     cout<<(temp->data)<<" ";

             if(temp->right)
                {
                    st1.push(temp->right) ;
                }

                    if(temp->left){

                            st1.push(temp->left);
                    }

            }

            turn =0;
        }

        ans.push_back(ans1);

    }
    return ans ;




}
