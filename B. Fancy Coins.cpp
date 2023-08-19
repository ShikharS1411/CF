#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long long double
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define fi first
#define se second
const ll mod = 1e9 + 7;
// (a+b)%mod=((a%mod)+(b%mod))%mod
// (a-b)%mod=((a%mod)-(b%mod)+mod)%mod
// (a*b)%mod=((a%mod)*(b%mod))%mod
// '0'=48,a=97,A=65
void solve(){
    ll m,k,a1,ak;cin>>m>>k>>a1>>ak;
	ll tt=m/k;
	tt=min(tt,ak);
	ll rem=m-(tt*k);
	if(a1>=rem){
		cout<<0<<endl;
        return;
	}
	rem-=a1;
	ll sum1=rem/k;
	rem-=sum1*k;
	if(rem>0 && a1>=k-rem){
        // 1 a1 add krke humesa bna skte h 
		cout<<sum1+1<<endl;
        return;
    }
	cout<<sum1+rem<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}