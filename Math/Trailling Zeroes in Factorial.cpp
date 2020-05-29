int Solution::trailingZeroes(int A) {
    if(A<5)
        return 0;
    int n=A,cnt=0;
    for(int i=5; n/i>=1;i*=5)
        cnt+=n/i;
    return cnt;
}