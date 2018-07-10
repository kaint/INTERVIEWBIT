#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[1000000][2] ;

ll find_combination(int n ,int prev)
{
    if(n==0)
    {
        return 1;
    }

    if(dp[n][prev]!=-1)
        return dp[n][prev] ;

    if(prev==0)
    {
        return ( dp[n][prev]=find_combination(n-1,0)%mod+find_combination(n-1,1)%mod )%mod ;
    }

    return dp[n][prev]= find_combination(n-1,0)%mod ;
}

int main() {

int t;cin>>t;
while(t--)
{

int n ;
cin>>n;

memset(dp,-1,sizeof(dp)) ;


cout<<find_combination(n,0)<<endl;

}

	return 0;
}
