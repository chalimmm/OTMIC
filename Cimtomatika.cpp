#include<bits/stdc++.h>
using namespace std;

int flag[1000005];

int main (){
	vector <int> prime;
	vector <int> cimto;
	for(int i=2; i<=1000; i++){
		if(flag[i]==0){
			prime.push_back(i);
			for(int j=i*i; j<=1000000; j+=i){
				flag[j]=1;
			}
		}
	}
	int N, M;
	cin>>N;
	cin>>M;
	for(int i=0; i<prime.size()-2; i++){
		for(int j=i+1; j<prime.size()-1; j++){
			for(int k=j+1; k<prime.size(); k++){
				cimto.push_back(prime[i]*prime[j]*prime[k]);
				// if(cimto.size()==N) cout<<prime[i]<<' '<<prime[j]<<' '<<prime[k]<<'\n';
			}
		}
	}
	cout<<cimto[N-1]<<'\n';
	cout<<lower_bound(cimto.begin(), cimto.end(), M)-cimto.begin()<<'\n';
}
