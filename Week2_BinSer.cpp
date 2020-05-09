#include<bits/stdc++.h>
using namespace std;

int val[2000001],x;
int ans,hit,n,a[101];

int main ()
{
	scanf("%d",&n);
	x=1;
	ans=0;
	hit=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++) if(a[i])
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
			{
				val[x]=a[i]*(a[j]+a[k]);
				x++;
			}
	sort(val+1,val+x);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
			{
				ans=a[i]*a[j]+a[k];
				hit+=upper_bound(val+1,val+x,ans)-lower_bound(val+1,val+x,ans);
			}
	printf("%d\n",hit);
}
