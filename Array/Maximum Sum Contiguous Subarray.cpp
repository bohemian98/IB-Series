int Solution::maxSubArray(const vector<int> &A) {
   int n=A.size();
   int curr_max=0,global_max=INT_MIN;
   for(int i=0;i<n;i++)
   {
       curr_max+=A[i];
       global_max=max(curr_max,global_max);
       if(curr_max<0)
        curr_max=0;
   }
   return global_max;
}