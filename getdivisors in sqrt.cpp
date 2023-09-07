void getdiv(int n,vector<int>&a){
	for (int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i==i)a.pb(i)
            else{
                a.pb(i);
                a.pb(n/i);
            }
		}
	}
}