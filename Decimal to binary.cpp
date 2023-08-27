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