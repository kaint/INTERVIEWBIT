void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int start=0;
    int end=A.size()-1 ;
    int i=0;

    while(i<=end)
    {
        if(A[i]==1)
        {
            i++ ;

        }
    else  if(A[i]==0)
        {
            swap(&A[start++],&A[i]);

        }
        else{
            swap(&A[end--], &A[i]) ;
        }


    }

}
