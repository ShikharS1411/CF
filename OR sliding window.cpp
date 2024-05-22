//range acc to 2^ limit
//k->window size
int orr=0,ans=0,n=a.size();
vector<int>bits(32);
for(int i=0;i<k;i++){
    orr|=a[i];
    for(int j=0;j<32;j++)bits[j]+=(a[i]&(1<<j));
}
ans=orr;
int prev=0;
for(int i=k;i<n;i++){
    orr=0;
    for(int j=0;j<32;j++)bits[j]+=(a[i]&(1<<j));
    for(int j=0;j<32;j++)bits[j]-=(a[prev]&(1<<j));
    for(int j=0;j<32;j++){
        //always be +ve as jo add kiya h wo kbhi na kbhi - bhi krege
        if(bits[j])orr|=(1<<j);
    }
    prev++;
    if(orr!=ans)return false;
}