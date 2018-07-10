#include<bits/stdc++.h>
using namespace std ;
vector<int>*graph;

int bipartite(int n)
{
    unordered_set<int>sets[2] ;

    if(n==0)
        return 1 ;

    sets[0].insert(0) ;

    vector<int>pending ;
    pending.push_back(0) ;

    while(pending.size()>0)
    {
       int current=pending.back()  ;
       pending.pop_back()  ;

       for(int i=0;i<graph[current].size() ;i++)
       {
           int neighbor=graph[current][i] ;
           int current_set=sets[0].count(current)==0?1:0 ;

           if(sets[0].count(neighbor)==0&&sets[1].count(neighbor)==0)
           {
               sets[current_set^1].insert(neighbor) ;
               pending.push_back(neighbor) ;

           }
           else if(sets[current_set].count(neighbor)>0)
            return 0;


       }
    }
    return 1 ;




}

int main()
{
  int n,m;
  cin>>n>>m ;

  graph=new vector<int>[n] ;

  while(m--)
  {
\
      int a,b;
      cin>>a>>b;
      graph[a].push_back(b) ;
      graph[b].push_back(a) ;
  }
  if(bipartite(n))
       {
           cout<<"Yes"<<endl;
       }
       else
       cout<<"Not"<<endl;




}
