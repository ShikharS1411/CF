//to convert decimal to its binary representation
int n;cin>>n;
//to store the binary rep
int val=n;
vector<int>bits,ans;
while(val){
    bits.pb(val%2);
    val/=2;
}
reverse(bits.begin(),bits.end());
for(auto x:bits)cout<<x<<" ";
cout<<endl;


/*
. for every binary num 1100 the decimal no till its set bit is always a divisor of it,
  eg 1100(12) take 100(4) which is a divisor
  the above concept is useful for qs in which divide by divisor is asked and stuff 
*/