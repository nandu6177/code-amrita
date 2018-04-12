#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<vector<pair<int,char> > > v(101);
vector<bool> vis(101);
vector<ll> ans(101);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		char c;
		cin>>a>>b>>c;
		v[a].pb(mp(c,b));
	}
	for(int i=1;i<=n;i++)
	{
		sort(all(v[i]))
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int a=0,M=i,L=j;
			while(1)
			{
				if(a%2)
				{

				}
			}
		}
	}
	return 0;
}