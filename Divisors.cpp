/*
. only perfect squares have odd no of divisors(including 1),else all have even
*/
//divisors for no a[i]
		for(ll i=0;i<n;i++){
			ll temp=a[i];
			for(ll j=2;j*j<=a[i];j++){
				while(temp%j==0){
					mp[j]++;
					temp/=j;
				}
			}
			if (temp!=1)mp[temp]++;
        }

//prime factorisation
for(ll i=2;i*i<=x;i++){
	  while(x%i==0){
	    x/=i;
    	mp[i]++;
	} 
}
if(x>1)mp[x]++;

    for(int i=l;i<=r;i++){
        //getdivisors
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                cout<<j<<" "<<i-j<<endl;
                return;
            }
        }
    }