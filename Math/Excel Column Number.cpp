int Solution::titleToNumber(string A) {
    int i=0,ans=0,c=0;
    while(A[i]!='\0')
    {
        c=A[i]-'A'+1;
        //cout<<c;
        if(A[i+1]!='\0')
        {
            ans+=c;
            ans=ans*26;
        }
        else
        {
            ans+=c;
        }
        i++;
    }
    return ans;
}