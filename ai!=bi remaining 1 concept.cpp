//here r 2 qs which uses compensate of 1 concept,trust me this is vvcool :o_o:
//https://codeforces.com/contest/1856/problem/B
//https://codeforces.com/contest/1923/problem/C
/*
check the base cases when n==1 (then not possible/no) and if there's c1=0 in the given array && n!=1 then it is always possible to rearrange the array so yes

STEPS:
1.Make all the non1s equall to 1
2.The calculate the remsum aftr converting all non1's equall to 1(just basic maths :)
3.Now check wheather we can disribute the remsum to rest of the 1's in the array or not
4.If can then YES else NO ezpz
*/

//ans 1
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#define ll long long int
#define lld long long double
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
const ll mod=1e9+7;
ll modadd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
ll modsub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
ll modmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
// '0'=48,a=97,A=65
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    ll c1=0,totsum=0;
    for(auto &x:a){
        cin>>x;
        c1+=(x==1);
        totsum+=x;
    }
    if(n==1){no return;}
    //agr koi 1 present hi nhi h toh fs kr skte rearrange krke hi :D
    if(c1==0){yes return;}
    //simple math eq h bhai to calcu rem sum lolxd
    ll non1kasum=totsum-c1;
    ll non1=n-c1;
    ll remsum=non1kasum-non1;//as inko 1 banana h
    //now check ki yeh remsum aa skta compulsate ho skta ya nhi
    if(c1>remsum){no return;}
    yes
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}
//ans 2
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#define ll long long int
#define lld long long double
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
const ll mod=1e9+7;
ll modadd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
ll modsub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
ll modmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
// '0'=48,a=97,A=65
void solve(){
    //10 gpa was ez but cp is soooooo fun :D "hawwy hawwy"
    ll n,q;cin>>n>>q;
    vector<ll>a(n),prefsum(n+1),pref1(n+1);
    for(auto &x:a)cin>>x;
    for(int i=0;i<n;i++){
        prefsum[i+1]=prefsum[i]+a[i];
        pref1[i+1]=pref1[i]+(a[i]==1);
    }
    for(ll i=1;i<=q;i++){
        ll l,r;cin>>l>>r;
        //for 0 based ind
        l--;r--;//no need for r but theek h na let it be 
        int sz=r-l+1;
        //base case
        if(sz==1){no continue;}
        ll totsum=prefsum[r+1]-prefsum[l];
        ll c1=pref1[r+1]-pref1[l];
        //base case
        if(c1==0){yes continue;}
        ll non1kasum=totsum-c1;
        ll non1s=sz-c1;
        ll remsum=non1kasum-non1s;
        if(remsum>=c1){yes continue;}
        no
    }
}   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}
