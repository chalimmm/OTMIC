#include<bits/stdc++.h>
using namespace std;
 
int t, n, k, a[200005];
 
struct Step{
	int left;
	int right;
	int delta;
	Step(int left, int right, int delta) 
        : left(left), right(right), delta(delta)
    { 
    } 
};
 
struct CompareDelta{ 
    bool operator()(Step const& p1, Step const& p2){ 
        if(p1.delta != p2.delta) return p1.delta < p2.delta;
        return p1.left > p2.left;
    } 
};
 
int main (){
	cin>>t;
	while(t--){
		memset(a, 0, sizeof(a));
		cin>>n;
		int id=1;
		priority_queue <Step, vector<Step>, CompareDelta> Pq;
		Pq.push(Step(1, n, n-1));
		while(!Pq.empty()){
			Step pos = Pq.top();
			Pq.pop();
			int l = pos.left;
			int r = pos.right;
			int d = r-l;
			int mid = (l+r)/2;
			if(id == n+1) break;
			if(mid == 0 || d < 0) continue;
			else if(a[mid] == 0){
				a[mid] = id;
				++id;
				Pq.push(Step(l, mid-1, mid-l-1));
				Pq.push(Step(mid+1, r, r-mid-1));
			}
		}
		cout<<a[1];
		for(int i=2;i<=n;i++){
			cout<<' '<<a[i];
		}
		cout<<'\n';
	}
}
