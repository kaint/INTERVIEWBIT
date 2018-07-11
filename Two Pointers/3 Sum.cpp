
int Solution::threeSumClosest(vector<int> &arr, int no) {
    int n=arr.size() ;
    sort(arr.begin(),arr.end()) ;
    int diff=INT_MAX ;
    int maxans=INT_MAX ;
     for(int i=0;i<=n-3;i++)
    {
        int left=i+1;
        int right=n-1 ;

            while(left<right)
            {
                int sum=arr[left]+arr[i]+arr[right] ;

                if(diff>abs(sum-no))
                {
                  diff=abs(sum-no);
                  maxans=sum ;


                }

               else if(sum>no)
                {
                    right-- ;
                }
                else{
                   left++ ;
                }

            }
    }
    return maxans ;

}
