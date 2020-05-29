int Solution::isPower(int A) {
    if(A<2) return true;
    for(auto i=2; i*i<=A;i++)
    {
        if(A%i==0)
        {
            for(auto j=2;j<=32;j++)
            {
                if(pow(i,j)==A)
                    return true;
            }
        }
    }
    return false;
}