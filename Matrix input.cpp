// 1. push_back method(for arrays/int*)->useful when col size is variable
    ll n;cin>>n;
    vector<vector<ll>>a(n);
    for(ll i=0;i<n;i++){
        ll k;cin>>k;//col size
        for(ll j=0;j<k;j++){
            ll x;cin>>x;
            a[i].pb(x);//cant push vectore if size is predefined
        }
    }
    //when size is not defined
    ll n;cin>>n;
    vector<vector<ll>>a;
    for(ll i=0;i<n;i++){
        ll k;cin>>k;//col size
        vector<int>temp;
        for(ll j=0;j<k;j++){
            ll x;cin>>x;
            temp.pb(x);
        }
        a[i].pb(temp);
    }