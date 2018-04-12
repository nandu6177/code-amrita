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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	ll ans=-99999999;
	for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		if(a>=0)
		{
			ll x=sqrt(a);
			if(x*x!=a)
			{
				ans=max(a,ans);
			}
		}
		else
		{
			ans=max(a,ans);
		}
	}
	cout<<ans<<endl;
	return 0;
}