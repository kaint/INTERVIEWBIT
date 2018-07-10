
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Write your code here

  int t;
  cin>>t;

  while(t--)
  {
    int arr[9] ;

    for(int i=0;i<10;i++)
    {
      cin>>arr[i] ;
    }

    int len=0;
    cin>>len;
    string str;
    cin>>str;
    int change=0 ;

    while(change==0){
      change=1 ;
    for(int i=0;i<10;i++)
    {

      for(int j=0;j<10;j++)
      {
        if(arr[(i+j)%10] >arr[i]+arr[j]){

          arr[(i+j)%10] = arr[i]+arr[j] ;
        change=0 ;
        }
      }

    }

    }

    int sum=0;
    for(int i=0;i<len;i++)
    {
      sum+=arr[int(str[i]) -'0' ] ;
    }
    cout<<sum<<endl;
  }

    return 0;
}
