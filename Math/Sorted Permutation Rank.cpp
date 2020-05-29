int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1))%1000003;
}
int Solution::findRank(string A) {
    int ans=0;
    int mod=1000003;
    for(int i=0;i<A.size()-1;i++)
    {
        int cnt=0;   
        for(int j=i+1;j<A.size();j++){
        if(A[i]>A[j])
            cnt++;
        }
        ans+=(cnt*fact(A.size()-i-1))%mod;
    }
    return (ans+1)%mod;
}