#include<iostream>
#include<climits>
#define ll long long
using namespace std;
ll a[10000];
ll dp[10000][10000];
ll sum(ll s,ll e)
{
	ll ans=0;
	for(ll i=s;i<=e;i++)
	{
		ans+=a[i];
		ans=ans%100;
	}
	return ans;
}
ll solve(ll i,ll j)
{
	if(i>=j)
	return 0;
	
	if(dp[i][j]!=-1)
	return dp[i][j];
	
	dp[i][j]=INT_MAX;
	for(int k=i;k<=j;k++)
	{
		dp[i][j]=min(dp[i][j],solve(i,k)+solve(k+1,j)+sum(i,k)*sum(k+1,j));
	}
	return dp[i][j];
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		dp[i][j]=-1;
	}
	cout<<solve(0,n-1)<<endl;
	return 0;
}

