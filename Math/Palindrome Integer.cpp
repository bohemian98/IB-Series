int Solution::isPalindrome(int A) {
    string numInS=to_string(A);
    int i=0,j=numInS.length()-1;
    if(numInS.length()==1)
        return true;
    while(i<=j)
    {
        if(numInS[i]!=numInS[j])
            return false;
        i++;
        j--;
    }
    return true;
}