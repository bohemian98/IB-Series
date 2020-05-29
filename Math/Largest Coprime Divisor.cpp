int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int Solution::cpFact(int A, int B) {
    int _gcd=gcd(A,B);
    if(_gcd==1)
        return A;
    else
        return cpFact(A/_gcd,B);
}