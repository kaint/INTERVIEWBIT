/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include<bits/stdc++.h>
 using namespace std ;
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) {

    map<int,vector<int>>mapp;
    queue<pair<int, TreeNode* >>q;
    if(root==NULL)
    {
        vector<vector<int>> ans;
        return ans;
    }
    q.push(make_pair(0,root)) ;
    int mind=INT_MAX;
    int maxd=INT_MIN;

    while(!q.empty())
    {
       int d=q.front().first ;
       TreeNode *temp=q.front().second;
       q.pop() ;

       mind=min(mind,d) ;
       maxd=max(maxd,d) ;

       mapp[d].push_back(temp->val) ;
       if(temp->left)
       {q.push(make_pair(d-1,temp->left)) ;

       }
       if(temp->right)
       {q.push(make_pair(d+1,temp->right)) ;

       }



    }

    vector<vector<int>>ans;
    for(int i=mind;i<=maxd;i++)
    {
        vector<int>temp;
        for(int j=0;j<mapp[i].size();j++)
        {
            temp.push_back(mapp[i][j]);
        }

        ans.push_back(temp) ;

    }
    return ans;


}
