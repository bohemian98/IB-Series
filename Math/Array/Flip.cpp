vector<int> Solution::flip(string A) {
    vector<int> v(A.size());
    vector<int> ans;
    int n=A.size();
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='0')
            v[i]=1;
        else
            v[i]=-1;
    }
    int sum=0,left=0,right=0,maxlen=INT_MIN;
    int leftAns=0,rightAns=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum<0)
        {
            left=i+1;
            sum=0;
        }
        else if(sum>maxlen)
        {
            leftAns=left;
            rightAns=i;
            maxlen=sum;
        }
    }
    if(maxlen<=0)
        return ans;
    else
    {
        ans.push_back(leftAns+1);
        ans.push_back(rightAns+1);
    }
    return ans;
}