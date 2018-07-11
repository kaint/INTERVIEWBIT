int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

if(A.size())

if(A.size()<=2)
{
    return A.size() ;
}

int index=2;
int start=2;

for(;start<A.size();start++)
{
    if(A[start-1]!=A[start])
    {
        A[index++]=A[start] ;
    }
    else if( A[index-1]==A[start]&&A[index-2]!=A[start] )
    {
        A[index++]=A[start] ;
    }
}
return index ;


}

