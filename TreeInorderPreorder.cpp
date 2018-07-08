
#include<bits/stdc++.h>
using namespace std ;

class node{
public : int data;
node *left;
node *right ;
node()
{


}
node(int data)
{

    left=NULL;
    right=NULL;
        this->data=data;
}

};



int find_index(int in[],int start,int end,int data)
{


    while(start<=end)
    {
        if(in[start]==data)
            return start ;
        start++ ;
    }
    return 0;
}

node* make_tree(int pre[],int in[],int start,int end,int preindex)
{

    if(start>end)
    {

        return NULL;
    }
    node *root=new node(pre[preindex]) ;
int index=find_index(in,start,end,pre[preindex]  ) ;

root->left  =make_tree(pre,in,start,index-1,preindex+1 ) ;
root->right =make_tree(pre,in,index+1,end  , preindex+index-start+1 ) ;

return root ;
}

void printT(node *root)
{
    if(root==NULL)
        return ;

    printT(root->left)      ;
    cout<<(root->data)<<" " ;
    printT(root->right)     ;
}


int main()
{a
    int pre[]={1,2,3,4,5,6,7};
    int in[]={3,2,5,4,1,7,6};

    node* root=make_tree(pre,in,0,6,0);
    printT(root) ;



}
