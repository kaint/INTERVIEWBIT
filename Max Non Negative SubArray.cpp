vector<int> Solution::maxset(vector<int> &arr) {


     int maxstart=-1 ;
    long long maxsum=-1 ;
    int end=-1 ;
    long long sum=0;
int    curr_start=0;

    for(int i=0;i<arr.size();i++)
    {
      if(arr[i]<0)
      {

          sum=0;
          curr_start=i+1 ;


      }
      else{

      sum+=arr[i] ;

      if(sum>maxsum)
      {
//cout<<"sum"<<sum<<endl ;
          maxsum=sum ;
          maxstart=curr_start ;
          end=i ;
      }
      else if(sum==maxsum){

            if(end-maxstart+1 < i-curr_start+1)
            {
                end=i ;
                maxstart=curr_start ;
            }

      }

      }
    }

    vector<int>ans ;
    if(maxstart==-1)
        return ans;

//    ans.resize(end-maxstart+1) ;

    for(int i=maxstart;i<=end;i++)
    {

        ans.push_back(arr[i]) ;

    }
return ans ;
}
