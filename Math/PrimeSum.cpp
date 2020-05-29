vector<int> Solution::primesum(int A) {
    vector<bool> iPrime(A+1);
    for(int i=0;i<=A;i++)
        iPrime[i]=1;
    iPrime[0]=0;
    iPrime[1]=0;
    for(int i=2;i*i<=A;i++)
    {
        if(iPrime[i])
        {
            for(int j=i*2;j<=A;j+=i)
                iPrime[j]=0;
        }
    }
    vector<int> ans(2);
    for(int i=2;i<=A/2;i++)
    {
        if(iPrime[i] && iPrime[A-i])
        {
            ans[0]=i;
            ans[1]=A-i;
            return ans;
        }
    }
     
}