//gr8 analysis of prob B :D
//https://www.youtube.com/live/DuazSwmvqJY?feature=share
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
    int n,m;
    cin>>n>>m;
    vector<string>v;
    int countO[m][26];
    memset(countO,0,sizeof(countO));
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      v.push_back(s);
      for(int j=0;j<m;j++){
        countO[j][s[j]-'a']++;
      }
    }
    int countP[m][26];
    memset(countP,0,sizeof(countP));
    for(int i=0;i<n-1;i++){
      string s;
      cin>>s;
      for(int j=0;j<m;j++){
        countP[j][s[j]-'a']++;
      }
    }
    string res;
    for(auto &x:v){
      for(int i=0;i<m;i++){
        countO[i][x[i]-'a']--;
      }
      bool ans=true;
      for(int j=0;j<m;j++){
        for(int i=0;i<26;i++){
          if(countO[j][i]!=countP[j][i]){
            ans=false;
            break;
          }
        }
        if(!ans)break;
      }
      if(ans){
        res=x;
        break;
      }
      for(int i=0;i<m;i++){
        countO[i][x[i]-'a']++;
      }
    }
    cout<<res<<"\n";
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