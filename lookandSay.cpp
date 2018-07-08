#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n==1)
       return 1 ;

    if(n==2)
    {
        return 11 ;
    }

    n=n-2 ;

    string prev="11" ;
    string ans="" ;

    while(n--)
    {
      int j=prev.length()-1 ;

      while(j>=0){

      char temp=prev[j] ;
      j-- ;

      int occurence =1 ;

      while(j>=0&&prev[j]==temp)
      {
          occurence++ ;
          j-- ;
      }
      string temp1=""+temp;
        ans=to_string(occurence)+temp1+ans  ;
       // j-- ;
      }
    }
    cout<<ans<<endl;
}
