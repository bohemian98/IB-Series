int Solution::maxArr(vector<int> &A) {
    int max_diff=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A.size();j++)
        {
            int func=abs(A[i]-A[j])+abs(i-j);
            max_diff=max(func,max_diff);
        }
    }
    return max_diff;
}