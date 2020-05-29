int Solution::reverse(int A) {
    bool neg=false;
    if(A<0)
        neg=true;
    if(neg)
        A=A*(-1);
    int rev=0;
    while(A!=0)
    {
        if(rev>(INT_MAX-(A%10))/10)
            return 0;
        else{
        rev=(A%10)+(rev*10);}
        A=A/10;
    }
    if(neg)
        rev=(-1)*rev;
    return rev;
}