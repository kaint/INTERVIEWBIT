#include<bits/stdc++.h>
using namespace std ;
#define ll long long
vector<int>*graph;
int *colored ;

int bipartite(int n,int i)
{
    colored[i]=1 ;
    queue<int>q;
    q.push(i) ;

    while(!q.empty())
    {
      int curr=q.front() ;
      q.pop();

      for(int j=0;j<graph[curr].size();j++)
      {
          int neigbor=graph[curr][j] ;

          if(colored[neigbor]==-1)
          {
              colored[neigbor]=1-colored[curr] ;
              q.push(neigbor);
          }
           else  if(colored[curr]==colored[neigbor])
           {
               return 1;
           }
      }
    }
          return 0 ;

}

int main()
{
    int t;
    cin>>t;
    int k=1 ;
    while(t--){


    int n;
    cin>>n;
    int m ;
    cin>>m;

graph=new vector<int>[n+1] ;

while(m--)
{
    int a,b               ;
    cin>>a>>b             ;
    graph[a].push_back(b) ;
    graph[b].push_back(a) ;
}

colored=new int[n+1];

for(int i=1;i<=n;i++)
{

    colored[i] =-1;
}
int flag=0;
cout<<"Scenario #"<<k<<":"<<endl;
for(int i=1;i<=n;i++)
{
    if(colored[i]==-1){
         //   cout<<"okay"<<endl;
    if(bipartite(n,i)==1)
    {
            flag=1 ;
        cout<<"Suspicious bugs found!"<<endl;
break;
    }
    }

}

if(flag==0)
{

    cout<<"No suspicious bugs found!"<<endl;
}


k++ ;
}

}

