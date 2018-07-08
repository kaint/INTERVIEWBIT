#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;

    //even length

    int maxlen=1;
    int start=0 ;
    int end=0 ;

    int i=0;
    while(i<str.length())
    {
        int left=i    ;
        int right=i+1 ;
        int len=0;


        while(left>=0&&right<str.length())
        {
            if(str[left]==str[right])
            {

                        if(maxlen<(right-left+1))
                    {
                        maxlen=right-left+1 ;
                        start=left ;
                        end=right ;
                    }
                        left-- ;
                        right++ ;

            }
            else{
                        break ;
            }



        }
 i++ ;
    }

         i=0;
    while(i<str.length())
    {
        int left=i    ;
        int right=i  ;
        //int len=1 ;


        while(left>=0&&right<str.length())
        {
             if(str[left]==str[right])
            {


              if(maxlen<(right-left+1))
            {

                maxlen=right-left+1 ;
                start=left ;
                end=right ;

            }
             left--  ;
            right++ ;

            }
            else{
                break ;
            }

        }





i++ ;

    }
      for(int i=start;i<=end;i++)
            cout<<(str[i]);
        cout<<endl;





}
