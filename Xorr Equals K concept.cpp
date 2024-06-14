
class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum=0,c=0;
        map<int,int>mp;
        mp[0]++;
        for(auto x:a){
            sum+=x;
            if(mp[sum-k])c+=mp[sum-k];
            mp[sum]++;
        }
        return c;
    }
};


    map<int,int>prefx;
    prefx[0]++;
    int xorr=0,c=0;
    for(auto x:a){
        xorr^=x;
        if(mp[xorr-b])c+=mp[xorr-b];
        mp[xorr]++;
    }
    return c;