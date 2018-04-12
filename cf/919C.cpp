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
	ll n,m,k;
	cin>>n>>m>>k;
	vector<string> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	ll ans=0;
	if(n==1)
	{
		ll count=0;
		for(ll i=0;i<m;i++)
		{
			if(v[0][i]=='.')
				count++;
			else
			{
				if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
			}
		}
		if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
	}
	else if(m==1)
	{
		ll count=0;
		for(ll i=0;i<n;i++)
		{
			if(v[i][0]=='.')
				count++;
			else
			{
				if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
			}
		}
		if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			ll count=0;
			for(int j=0;j<m;j++)
			{
				if(v[i][j]=='.')
					count++;
				else
				{
					if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
				}
			}
			if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
		}
		for(int i=0;i<m;i++)
		{
			ll count=0;
			for(int j=0;j<n;j++)
			{
				if(v[j][i]=='.')
					count++;
				else
				{
					if(count>=k)
					{
						ans+=count-k+1;
					}
					count=0;
				}
			}
			if(count>=k)
					{
						// cout<<count<<endl;
						ans+=count-k+1;
					}
					count=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}