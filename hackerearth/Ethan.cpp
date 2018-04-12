#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
// const ll mod=1000000007;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,q,mod;
	cin>>n>>q>>mod;
	vector<ll> prod1(n),prod2(n);
	cin>>prod2[0];
	prod1[0]=prod2[0]%mod;
	for(ll i=1;i<n;i++)
	{
		cin>>prod2[i];
		prod1[i]=(prod1[i-1]*prod2[i])%mod;
	}
	for(ll i=n-2;i>=0;i--)
	{
		prod2[i]=(prod2[i+1]*prod2[i])%mod;
	}
	// for(ll i=0;i<n;i++)
	// 	cout<<prod1[i]<<" ";
	// cout<<endl;
	// for(ll i=0;i<n;i++)
	// 	cout<<prod2[i]<<" ";
	// cout<<endl;
	for(ll i=0;i<q;i++)
	{
		ll j;
		cin>>j;
		j--;
		if(j>0 and j<n-1)
			cout<<(prod1[j-1]*prod2[j+1])%mod<<endl;
		else if(j>0)
			cout<<prod1[j-1]<<endl;
		else if(j<n-1)
			cout<<prod2[j+1]<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}