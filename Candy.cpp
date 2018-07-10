
#include<bits/stdc++.h>
using namespace std ;



int countsetbits(int no)
{
  int count=0;

  while(no){
    if(no&1)
    count++ ;
    no=no>>1 ;
  }

  return count ;

}

long  long *dp ;
long long  find_ans(int mask,int n,int like[][MAXN])
{

  if(mask==((1<<n)-1))
    return 1 ;

 int ans=0;
  if(dp[mask]!=-1)
    return dp[mask] ;
 int count=countsetbits(mask) ;

  for(int i=0;i<n;i++)
  {
      if(like[count][i]==1)
      {
         if( ( mask & ( 1<<(n-i-1) ) ) == 0 )
         {
           ans+=find_ans( mask|(1<<(n-i-1)) ,n, like ) ;
         }
      }
  }

  return dp[mask]=ans ;

}

long long solve(int like[][MAXN],int N)
{
	// Write your code here.
  dp=new long long[ ( 1<<(N) ) +1] ;
  for(int i=0;i<=(1<<N);i++)
  {
    dp[i]=-1;
  }

  return find_ans(0,N,like) ;

}
