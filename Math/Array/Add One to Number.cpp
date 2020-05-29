vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    int x=1;
    for(int i=n-1; i>=0;i--) 
    {
        int y=A[i]+x;
        A[i] = y%10;
        x=y/10;
    }

    if(x!=0)
    {
        auto it = A.begin();  
        A.insert(it,x);
    }

    while(A[0]==0)
    {
        A.erase(A.begin()); //erasing zeroes at first position.
    }

    return A;
}
