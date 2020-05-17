#include<bits/stdc++.h>
using namespace std;
 
int t, n;
 
int main(){
	cin>>t;
	while(t--){
		vector <int> v;
		cin>>n;
		int mod=10;
		while(mod<=n*10){
			if(n%mod!=0) v.push_back(n%mod);
			n-=n%mod;
			mod*=10;
		}
		int ln=v.size();
		printf("%d\n", ln);
		printf("%d", v[0]);
		for(int i=1;i<ln;i++){
			printf(" %d", v[i]);
		}
		printf("\n");
	}
}
