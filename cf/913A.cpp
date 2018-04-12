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
	ll n,m;
	cin>>n>>m;
	if(n>=27)
		cout<<m<<endl;
	else
	{
		ll pow=1;
		for(int i=1;i<=n;i++)
			pow*=2;
		cout<<m%pow<<endl;
	}
	return 0;
}