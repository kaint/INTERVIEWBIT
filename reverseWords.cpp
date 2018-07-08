#include<bits/stdc++.h>
using namespace std;

void reverseit( string &str,int start,int end )
{
    while(start<end)
    {
        char a=str[start] ;
        str[start]=str[end];
        str[end]=a;
        start++ ;
        end-- ;
    }
}

int main()
{

    string str;
    getline(cin,str) ;

    int start=0;

    int end=str.length()-1 ;

    if(str.length()==0)
    {

        return 0;
    }

    while(start<str.length()&&str[start]==' ' )
        start++ ;

        //cout<<"hleo1"<<endl;

    while(end>=0&&str[end]==' '){
        end-- ;
   // cout<<"hleo"<<endl;

    }
        //cout<<"Hleo2"<<endl;

    int k=0;
  //  cout<<start<< " "<<end<<endl;

    while(start<=end)
    {
      //  cout<<str[start];
        if(str[start]!=' ')
        {
            str[k++]=str[start] ;
             start++ ;
        }
        else{
            while(str[start]==' ')
                start++ ;
            str[k++]=' ' ;
        }
    }

    str=str.substr(0,k);
    //cout<<endl<<str<<endl;

    reverseit(str,0,str.length()-1) ;
  //  cout<<str<<endl;
    start=0;
    end=str.length()-1;
    int begin=0;


    while(start<=end)
    {
     if(start==end )
     {
         reverseit(str,begin,start) ;
     }
    else if(str[start]==' ')
         {
             reverseit(str,begin,start-1);
             begin=start+1 ;
         }
         start++ ;
    }

    cout<<(str)<<endl;
}
