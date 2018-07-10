#include<bits/stdc++.h>
using namespace std;
#define ll long long

int x[]={-1,0,1,0 }  ;
int y[]={ 0,1,0,-1 } ;
int **visited;
  int n,m;

  ll **mat ;
vector<pair<int,int>>ans;

int isValid(int dx,int dy)
{
  if(dx>=0&&dx<n&&dy>=0&&dy<m&&visited[dx][dy]==0)
  {return 1 ;
  }
  return  0 ;
}

int dfs(int dx,int dy,int j)
{
  visited[dx][dy]=1 ;
  ans.push_back(make_pair(dx,dy)) ;

  if(dx==0||dy==0||dx==n-1||dy==m-1)
    return 1 ;

  for(int i=0;i<4;i++)
  {
    if(isValid(dx+x[i],dy+y[i]))
    {
      if( ( mat[dx][dy] - mat[dx+x[i]][dy+y[i]] >=0 ) && ( mat[dx][dy] - mat[dx+x[i]][dy+y[i]] <=j   ) &&dfs(dx+x[i],dy+y[i],j) )
         {
           return 1 ;
         }
    }

  }




  ans.pop_back() ;
  visited[dx][dy]=0 ;
  return 0 ;

}

int main()
{
  cin>>n>>m;
  mat=new ll*[n] ;

  visited=new int*[n] ;

  for(int j=0;j<n;j++)
    visited[j]=new int[m]() ;

  for(int i=0;i<n;i++)
    mat[i]=new ll[m] ;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>mat[i][j];
    }
  }

  int dx,dy,j    ;
  cin>>dx>>dy>>j ;
  dx-- ;
  dy-- ;

  if(dfs(dx,dy,j))
  {
    cout<<"YES"<<endl;
    cout<<ans.size()<<endl;

    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
    }


  }
  else{
    cout<<"NO"<<endl;
  }







  return 0;
}
