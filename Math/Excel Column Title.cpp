string Solution::convertToTitle(int A) {
    string ans="";
    int n=A;
    while(n)
    {
        int rem=n%26;
        if(rem)
        {
            char c=rem-1+'A';
            n=n/26;
            string s;
            s.push_back(c);
            ans.insert(0,s);
        }
        else
        {
            ans.insert(0,"Z");
            n= (n/26)-1;
        }
    }
    return ans;
}