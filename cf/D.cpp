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
	freopen("domino.in","r",stdin);
	freopen("domino.out","w",stdout);
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ll k,r;
	cin>>k>>r;
	vector<pair<ll,ll> > v(k);
	ll sum=0;
	for(ll i=0;i<k;i++)
	{
		ll a,b;
		cin>>a>>b;
		sum+=a+b;
		v[i]=mp(a,b);
	}
	ll x,y;
	cin>>x;
	for(ll i=1;i<2*r;i++)
	{
		cin>>y;
	}
	//cerr<<x<<" "<<y<<endl;
	ll a=0,flag1=0,flag2=0;
	for(ll i=0;i<k;i++)
	{
		if((v[i].ff==x or v[i].ss==x) or (v[i].ff==y or v[i].ss==y))
		{
			if(v[i].ff==v[i].ss)
			{
				if(v[i].ff==x and flag1==0)
					flag1=1;
				else if(v[i].ff==y and flag2==0)
					flag2=1;
			}
			a=max(a,v[i].ff+v[i].ss);
		}
	}
	if(flag1 and flag2)
	{
		if(2*x+2*y>=a)
		{
			sum-=(2*x+2*y);
			k-=2;
		}
		else
		{
			sum-=a;
			k--;
		}
		//	cout<<sum-2*x-2*y<<" "<<a<<endl;
	}
	else
	{
		sum-=a;
		k--;
	}
	if(sum==0 and k==0)
		cout<<-1<<endl;
	else
		cout<<sum<<endl;
	return 0;
}