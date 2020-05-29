vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int a,b;
    vector<int> ans;
    int n=A.size();
    vector<int> v(n+1,0);
    for(int i=0;i<n;i++)
        v[A[i]]++;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==2)
            a=i;
        if(v[i]==0)
            b=i;
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}