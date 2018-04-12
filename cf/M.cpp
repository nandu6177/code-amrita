#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
int main()
{
	freopen("munich.in","r",stdin);
	freopen("munich.out","w",stdout);
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ll m,n,k;
	cin>>m>>n>>k;
	m++;
	n++;
	ll p1,p2,p3;
	cin>>p1>>p2>>p3;
	ll q1,q2,q3;
	cin>>q1>>q2>>q3;
	/*if(p1<p2)
		p2=p1;
	if(q1<q2)
		q2=q1;
	if(q1<=k*p1)
		p1=q1;
	if(q2<=k*p2)
		p2=q2;
	if(q3<=k*p3)
		p3=q3;*/
	//ll ans=99999999999999999;
	vector<vector<ll> > dp(n,vector<ll> (m,0));
	for(int i=0;i<m;i++)
		dp[0][i]=min(i*k*p1,min(i*q1,min(k*p3+dp[0][max(i-5,0)],q3+dp[0][max(i-5,0)])));
	for(int i=0;i<n;i++)
		dp[i][0]=min(i*k*p2,min(i*k*p1,min(i*q1,min(i*q2,min(k*p3+dp[max(i-10,0)][0],q3+dp[max(i-10,0)][0])))));
	for(ll i=1;i<n;i++)
		for(ll j=1;j<m;j++)
		{
			dp[i][j]=dp[i][j-1]+min(k*p1,q1);
			//ll add=999999999999999;
			for(ll t=0;t<=5;t++)
			{
				dp[i][j]=min(dp[i][j],min(k*p3+dp[max(i-2*t,(ll)0)][max(j-5+t,(ll)0)],q3+dp[max(i-2*t,(ll)0)][max(j-5+t,(ll)0)]));
			}
		}
	cout<<dp[n-1][m-1]<<endl;
	return 0;
}