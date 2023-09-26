    vector<ll>pref(n+1);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+a[i];
    }
    //to get ranged sum
    pref[r+1]-pref[l];