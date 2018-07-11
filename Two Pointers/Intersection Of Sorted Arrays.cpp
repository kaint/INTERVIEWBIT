
vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {

    vector<int>ans;

    int i=0;
    int j=0 ;

 int   m=a.size();
 int    n=b.size( ) ;


    while(i<m&&j<n)
    {
        while(i<m&&a[i]<b[j])
        {
            i++ ;
        }
        while(j<n&&b[j]<a[i])
        {
            j++ ;
        }
        if(i<m&&j<n)
        {
            if(a[i]==b[j])
            {
                ans.push_back(a[i]);
            i++;
            j++ ;

            }

        }

    }
    return ans ;
}
