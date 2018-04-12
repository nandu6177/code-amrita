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
	ll n,sum=0;
	// cin>>n;
	for(ll n=1;n<100;n++)
	{
		sum=0;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				ll x=j+i,a=0,b=0;
				while(x>0)
				{
					int z=x%10;
					if(z%2)
						a+=z;
					else
						b+=z;
					x/=10;
				}
				sum+=abs(a-b);
				// cout<<abs(a-b)<<"  ";
			}
			// cout<<endl;
		}
		cout<<sum<<endl;
	}
	return 0;
}