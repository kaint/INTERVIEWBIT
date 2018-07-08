#include<bits/stdc++.h>
using namespace std ;
class trie{
public : trie *left ;
         trie *right ;

};

int compare_with_prefixes(trie *head,int curr_xor)
{
    int val=0;

    for(int i=31;i>=0;i--)
    {
        int temp=curr_xor>>i ;

        if(temp&1)
        {
            if(head->left)
            {

                val+=pow(2,i) ;
                head=head->left ;
            }

            else{

                head=head->right ;

            }


        }
        else{

            if(head->right)
            {

                val+=pow(2,i);
                head=head->right ;
            }
            else{
                head=head->left ;
            }

        }
    }
    cout<<"the value in insertion is "<<val<<endl;
    return val ;
}

void insert_it(trie *head,int curr_xor)
{

    for(int i=31;i>=0;i--)
    {
        int temp=curr_xor>>i ;

        if(temp&1)
        {
            if(!head->right)
            {
              head->right=new trie() ;
            }
            head=head->right ;

        }
        else{
            if(!head->left)
            {
                head->left=new trie() ;
            }
            head=head->left ;
        }
    }

}
int main()
{

    int n;
    cin>>n;
    int arr[n] ;

    for(int i=0;i<n;i++)
        cin>>arr[i] ;

    trie *head=new trie() ;

    int max_val=INT_MIN ;
    int curr_xor=0;

    for(int i=0;i<n;i++)
    {

        curr_xor=curr_xor^arr[i] ;

        insert_it(head,curr_xor) ;

        max_val=max(max_val,curr_xor) ;

        max_val=max(max_val,compare_with_prefixes(head,curr_xor)) ;


    }
    cout<<max_val<<endl;


}
