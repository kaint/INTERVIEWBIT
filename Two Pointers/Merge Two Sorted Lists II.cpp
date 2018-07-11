
void Solution::merge(vector<int> &a, vector<int> &b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=0;
    int j=0;
    int m=a.size();
    int n=b.size() ;
    vector<int>ans ;

    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            ans.push_back(a[i]) ;
            i++ ;
        }
        else{

            ans.push_back(b[j]) ;
           j++ ;

        }
    }
    while(i<m)
    {
        ans.push_back(a[i++]) ;
    }
    while(j<n)
    {
        ans.push_back(b[j++]) ;
    }

    a.resize(m+n) ;
    for(int i=0;i<m+n;i++)
    {
        a[i]=ans[i] ;
    }


}
