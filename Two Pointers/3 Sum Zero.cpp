vector<vector<int> > Solution::threeSum(vector<int> &arr) {
    vector<vector<int>>ans ;
    sort(arr.begin( ),arr.end()  ) ;

    unordered_set<string>st;

    int n=arr.size();

    for(int i=0;i<=n-3;i++)
    {
        int left=i+1;
        int right=n-1 ;

            while(left<right)
            {
                int sum=arr[left]+arr[i]+arr[right] ;
                if(sum==0)
                {
                    vector<int>ans1 ;
                    ans1.clear() ;

                    ans1.push_back(arr[i]);
                    ans1.push_back(left);
                    ans1.push_back(right);

                    sort(ans1.begin(),ans1.end() ) ;

                    string temp=to_string(ans1[0])+to_string(ans1[1])+to_string(ans1[2]) ;

                    if(st.find(temp)==st.end())
                    {
                        st.insert(temp) ;
                        ans.push_back(ans1) ;
                    }

                    right--;
                    left++ ;
                }

               else if(sum>0)
                {
                    right-- ;
                }
                else{
                   left++ ;
                }

            }
    }

    return ans ;


}

