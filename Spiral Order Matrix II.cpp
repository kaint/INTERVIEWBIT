vector<vector<int> > Solution::generateMatrix(int n) {

    vector<vector<int>>ans ;

    for(int i=0;i<n;i++)
    {
        vector<int>small ;
        small.resize(n) ;
        ans.push_back(small) ;
    }

      int rows=n;
        int cols=n;
        int k=0 ;
        int l=0 ;


int val=1 ;

        while(k<rows&&l<cols)
        {
            for(int i=l;i<cols;i++)
            {
               ans[k][i]=val;
               val++ ;

            }

            k++ ;

            for(int j=k;j<rows;j++)
            {

                ans[j][cols-1]=val;
                val++ ;

            }
            cols-- ;

            for(int i=cols-1 ;i>=l;i--)

            {

                ans[rows-1][i]=val;
                           val++ ;


            }

            rows-- ;

            for(int j=rows-1; j>=k;j--)
            {

               ans[j][l]=val;
                           val++ ;


            }


            l++ ;

        }

        return ans ;



}
