int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    int n=A.size(),m=B.size();
    if(m!=n)
        return 0;
    for(int i=1;i<n;i++)
    {
        int x=abs(A[i]-A[i-1]),y=abs(B[i]-B[i-1]);
        ans+=max(x,y);
    }
    return ans;
}