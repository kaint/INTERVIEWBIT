vector<vector<int> > Solution::diagonal(vector<vector<int> > &arr) {
    int rows=arr.size();
    int cols=arr.size();
        vector<vector<int>>ans;
        for(int i=0;i<cols;i++)
        {
            vector<int>small ;
            int j=0 ;
            int k=i;

            while(j<rows&&k>=0)
            {
                small.push_back(arr[j][k]) ;
                j++ ;
                k-- ;
            }
                ans.push_back(small) ;
        }


        for(int i=1;i<rows;i++)
        {
            vector<int>small;
            int k=cols-1 ;
            int j=i ;

            while(j<rows&&k>=0)
            {

                small.push_back(arr[j][k]) ;

                j++ ;
                k-- ;
            }

            ans.push_back(small) ;

        }
return ans ;

}
