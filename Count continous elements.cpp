// 1
// here's the the best way to count number of times the elements(for eg 0) which occurs in a consecutive manner
vector<int>zeros;
int count=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        count++;
        //it willkeep counting till any non 0 element occurs
    }
    //when a non 0 elem occurs it will check this cond and the count would already be having some value from its prev 0 cond,we'll store it and make it to 0
    else if(count){
        zeros.pb(count);
        count=0;
    }
}
if(count)zeros.pb(count);
//edge case
//if all are 0/last element having 0s(conti) u can add a garbage element at the end and make it till <=n so that it would also be coverd :D



// 2
//for lenght
//another method to find conti element counts
    vector<int>a;
    char prev=s[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(prev==s[i])count++;
        else if(prev!=s[i]){
            a.pb(count);
            count=1;
        }
        //update prev
        prev=s[i];
    }
    if(count)a.pb(count);//for the last one


// 3
    //compressing 
    int count=1
        for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])count++;
    }


//storing count in map even if same element comes after few
    map<int,int>mp;
    int c=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])c++;
        else{
            if(mp[a[i-1]]){
                int mx=mp[a[i-1]];
                mp[a[i-1]]=max(mx,c);
            }
            else mp[a[i-1]]=c;
            c=1;
        }
    }
    if(mp[a[n-1]]){
        int mx=mp[a[n-1]];
        mp[a[n-1]]=max(mx,c);
    }
    else mp[a[n-1]]=c;
    // for(auto x:mp)cout<<x.fi<<" "<<x.se<<endl;
    // cout<<endl;

//if storing the elements a well no need to do the check as we'll pus a[i-1]th element only thus at then end no matter what push(a.back()) as well 
//eg
    int n;cin>>n;
    vector<int>a(n);
    for(auto &x:a)cin>>x;
    //jbtk same rhega chalao
    map<int,int>mp;
    int c=1;
    vector<pair<int,int>>vp1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])c++;
        else{
            vp1.pb({c,a[i-1]});
            mp[a[i-1]]++;
            c++;
        }
    }
    // if(mp.find(a.back())==mp.end())vp1.pb({c,a.back()});
    vp1.pb({c,a.back()});
    for(auto x:vp1)cout<<x.fi<<" "<<x.se<<endl;
    cout<<endl;