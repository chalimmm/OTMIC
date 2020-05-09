#include<bits/stdc++.h>
using namespace std;

int val[2000001],x;
int ans,hit,n,a[101];

int main (){
	scanf("%d",&n);	//n = Banyak Set
	id=1;
	ans=0;
	hit=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]); //a[i] adalah anggota Set
	}
	for(int i=1;i<=n;i++){
		if(a[i]){ //a[i] merepresentasikan "d"
			for(int j=1;j<=n;j++) //a[j] merepresentasikan "e"
				for(int k=1;k<=n;k++){ //a[k] merepresentasikan "f"
					val[++id]=a[i]*(a[j]+a[k]); //val[x] merepresentasikan "d*(e+f)"
				}
		}
	}
	sort(val+1,val+x); //Binary Search mencari pada data terurut
	for(int x=1;x<=n;x++) //a[x] merepresentasikan "a"
		for(int y=1;y<=n;y++) //a[y] merepresentasikan "b"
			for(int z=1;z<=n;z++){ //a[x] merepresentasikan "c"
				ans=a[x]*a[y]+a[z]; //ans merepresentasikan "a*b+c"
				hit+=upper_bound(val+1,val+id,ans)-lower_bound(val+1,val+id,ans); //di sinilah Binary Search terjadi
			}
	printf("%d\n",hit);
}
