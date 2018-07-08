#include<bits/stdc++.h>
using namespace std;
//   update(tree,arr,2,1,8,1 ) ;

void update(int *tree, int *arr,int index,int left,int right,int curr)
{
      if(left>right)
        return ;

    if(left==right)
    {
        cout<<"Heloo"<<endl;


        arr[index]=10 ;
        tree[curr]=10;

        return ;
    }


    int mid=left+(right-left)/2 ;

    if(index>mid)
    {
        cout<<"Hello1"<<endl;
        update(tree,arr,index,mid+1,right,2*curr+1) ;
    }
    else{
            cout<<"Hello1"<<endl;
        update(tree,arr,index,left,mid,2*curr) ;
    }

    tree[curr]=tree[2*curr]+tree[2*curr+1] ;
}



void build_tree(int *tree,int curr_node,int *arr,int left,int right)
{
    if(left==right)
    {
        tree[curr_node]=arr[left];
        return ;
    }

     int mid=left+(right-left)/2 ;

     build_tree(tree,2*curr_node,arr,left,mid) ;
     build_tree(tree,2*curr_node+1,arr,mid+1,right) ;

    tree[curr_node]=tree[2*curr_node]+tree[2*curr_node+1]  ;
}



int main() {

	// Write your code here

  int n,q;
  cin>>n>>q;
  int arr[n+1] ;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i+1] ;
  }

  int *tree=new int[2*n+1]() ;

  build_tree(tree,1,arr,1,n) ;

  for(int i=1;i<=2*n;i++)
  {

      cout<<tree[i]<<" ";
  }
     cout<<"after the updateion"<<endl;


   update(tree,arr,2,1,n,1 ) ;

   cout<<"after the updateion"<<endl;

  for(int i=1;i<=2*n;i++)
  {

      cout<<tree[i]<<" ";
  }

}
