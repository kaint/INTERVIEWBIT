#include<bits/stdc++.h>
using namespace std;
vector<int>*v;
vector<int>*r ;
void dfs(int i,stack<int>&st,int visited[])
{
    visited[i]=1 ;

    for(int j=0;j<v[i].size();j++)
    {
        if(visited[v[i][j]]==0)
        {
            dfs(v[i][j],st,visited) ;
        }
    }

    cout<<"in stack "<<i<<endl;
    st.push(i) ;
}
void dfs(int i,int visited[])
{
     cout<<"in reverse "<<i<<endl;
     visited[i]=1 ;

    for(int j=0;j<r[i].size() ;j++)
    {
        if(visited[r[i][j]]== 0)
        {
            dfs(r[i][j],visited) ;
        }

    }

}
int main()
{

    int n,e;
    cin>>n>>e;
    v=new vector<int>[n+1] ;
   r=new vector<int>[n+1] ;

    while(e--)
    {

        int a,b;
        cin>>a>>b;

        v[a].push_back(b);
        r[b].push_back(a) ;

    }

    stack<int>st;

    int visited[n+1]={0} ;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i,st,visited) ;
        }
    }




    memset(visited,0,sizeof(visited)) ;

   int count=0;
    while(!st.empty())
    {
        int i=st.top();
        st.pop() ;

        if(visited[i]==0)
        {
            count++ ;
            cout<<"hello"<<endl;
            dfs(i,visited) ;
        }
    }
        cout<<count<<endl;


}

