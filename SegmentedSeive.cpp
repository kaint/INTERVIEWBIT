#include <bits/stdc++.h>
using namespace std;
#define MAX 2147483648
#define ll long long
int arr[int(sqrt(MAX))+1] ;
int n;
ll *last ;

void fill_this()
{

  for(int i=0;i<=sqrt(MAX);i++ )
  {
    arr[i]=1 ;
  }

for(int i=2; i*i<=int(sqrt(MAX));i++ )
{

  if(arr[i]==1){

    for(int j=i*i;j<=sqrt(MAX);j+=i )
  	{
      arr[j]=0;
  	}
  }
}

}
int main()
{

  int t;
  cin>>t;
  n=int(sqrt(MAX)) ;

  fill_this() ;

  while(t--)
  {
  	  	ll l,r;
    	cin>>l>>r;
    	last=new ll[r-l+1] ;

    for(int  i=0;i<=r-l;i++)
      last[i]=1 ;


   for(int i=2;i*i<=r;i++)
   {
     if(arr[i]==1){
     int j =  (l/i)*i ;

     while(j<=l)
     {
       j+=i;
     }

     for(;j<=r;j+=i)
     {
       if(j<=sqrt(MAX))
       {
         if(arr[j])
           continue ;
       }
       last[j-l]=0;
     }
     }

   }

    int ans=0;

    for(int i=0;i<=r-l;i++)
    {
      if(last[i])
      {
        cout<<(i+l)<<endl;
      }
    }
    cout<<endl;
    //cout<<ans<<endl;
  }
  return 0;
}
