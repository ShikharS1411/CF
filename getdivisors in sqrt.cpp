/*
. only perfect squares have odd no of divisors(including 1),else all have even
*/
void getdiv(int n,vector<int>&a){
	for (int i=1;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i)a.pb(i);
            else{
                a.pb(i);
                a.pb(n/i);
            }
		}
	}
}