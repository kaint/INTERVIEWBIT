#include<bits/stdc++.h>
using namespace std ;
vector<int>*graph;
vector<int>*rgraph;
stack<int>st;
int *visited ;
vector<int>small;

void dfs(int i)
{
    visited[i]=1 ;
     for(int j=0;j<graph[i].size();j++)
    {
        if(visited[graph[i][j]]==0)
        {
            dfs(graph[i][j]) ;
        }
    }
    st.push(i) ;
}


void rdfs(int i)
{
    visited[i]=1;
    small.push_back(i) ;

    for(int j=0;j<rgraph[i].size();j++)
    {
        if(visited[rgraph[i][j]]==0)
        {
            rdfs(rgraph[i][j]) ;
        }
    }
}

int main()
{
    int n,m   ;
    cin>>n>>m ;
    graph=new vector<int>[n+1] ;
    rgraph=new vector<int>[n+1] ;

    while(m--)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b) ;
        rgraph[b].push_back(a) ;
    }

    visited=new int[n+1]() ;
    vector<vector<int>>component;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
        }
    }

    for(int i=1;i<=n;i++)
    {
        visited[i]=0 ;
    }
    int scc=0;

    while(!st.empty())
    {
        int temp=st.top();

        st.pop();
        small.clear() ;

        if( visited[temp]==0 )
        {
            scc++ ;
            rdfs(temp) ;
            component.push_back(small) ;
        }

    }
    unordered_set<int>sets[scc] ;

    for(int i=0;i<scc;i++)
    {
        small=component[i] ;

        for(int j=0;j<small.size();j++)
        {
            sets[i].insert(small[j]) ;
        }

    }

    vector<int>finalans;
    for(int i=0;i<scc;i++)
    {int flag=0;
        small=component[i] ;
        for(int j=0;j<small.size();j++)
        {

            int element=small[j] ;
            for(int k=0;k<graph[element].size();k++)
            {

                if(sets[i].count(graph[element][k])==0)
                {

                    flag=1 ;
                }
            }
        }

        if(flag==0)
        {
            for(int j=0;j<small.size();j++)
            {
                finalans.push_back(small[j]) ;
            }
        }

    }

    cout<<(finalans.size())<<endl;
    sort(finalans.begin(),finalans.end()) ;
    for(int k=0;k<finalans.size() ;k++)
        cout<<finalans[k]<<" ";














}
