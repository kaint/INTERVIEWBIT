#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll find_ans(ll coins[],int index)
{
    if(index<0)
    {
        return 0 ;
    }

  return max(coins[index]+find_ans(coins,index-2),find_ans(coins,index-1) ) ;

}
int main()
{
  int t;
  cin>>t;
  int count=1;

  while(t--)
  {
    int n;
    cin>>n;
    ll coins[n] ;


    for(int i=0;i<n;i++)
      cin>>coins[i] ;

    ll dp[n+1] ;

    dp[0]=0;
    dp[1]=coins[0] ;


    for(int i=2;i<=n;i++)
    {
      dp[i]=max( coins[i-1]+dp[i-2] , dp[i-1]) ;
    }

   //ll ans=find_ans(coins,n-1) ;

    cout<<"Case "<<count<<":"<<" "<<max(dp[n],dp[n-1])<<endl;

    count++ ;
  }
    return 0;
}
