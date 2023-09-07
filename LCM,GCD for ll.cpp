int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/(__gcd(a,b));//for int
    return (a*b)/(gcd(a,b));//for ll
}