//this is to find all the subarray/string using two loops
// 1->for sub strings
for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        //take all the subarrays 
        //use this to find all the substrings,dont use s.substr(i,j);coz thats wrong :/
        string t=s.substr(i,j-i+1);
        // cout<<t<<endl;
    }
}
// 2-.for subarrays,have to use 3 loops
for(int i=0;i<a.size();i++){
    for(int j=i;j<a.size();j++){
        vector<int>temp;
        for(int k=i;k<=j;k++){
            cout<<a[k]<<" ";
            temp.pb(a[k]);
        }
    }
}
//array elements in all subarrays form a triangle curve as mid as most occ 1st and last as min occurence elements

//Max occurence of an element for in all subarrays is of mid element and least is of corner elenments
//just like a bell curve of occurrences

//all subarray sum formula in O(n)
    for(int i=0;i<n;i++)sum+=(a[i]*(i+1)*(n-i));