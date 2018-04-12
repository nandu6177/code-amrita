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
	freopen("area.in","r",stdin);
	freopen("area.out","w",stdout);
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ll n;
	cin>>n;
	double ans=0;
	for(ll i=0;i<n;i++)
	{
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double x=(c-a);
		double y=(b-d);
		double ratio=(x*y)/(2*(x+y));
		//ans=0;
		//cerr<<x<<" "<<y<<" "<<(2*(x+y))<<" "<<ratio<<endl;
		if(ratio>ans)
			ans=ratio;
	}
	cout<<fixed<<setprecision(10)<<ans<<endl;
	return 0;
}