#include<bits/stdc++.h>
using namespace std ;
int main()
{

    string str;
    cin>>str;
    stack<char>st;
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==')')
        {

            if(st.top()=='(')
            {
                flag=1 ;
                cout<<1<<endl;
            }

            while((!st.empty())&&(st.top()!='('))
            {
                st.pop( ) ;
            }
               st.pop( );
            }

            else{

                st.push(str[i]);
            }

    }
if(flag==0)
{
    cout<<0<<endl;
}

}
