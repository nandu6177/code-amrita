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
	ll n,k;
	cin>>n>>k;
	// vector<ll> a(k);
	ll ans=0,c=0,rem=n;
	for(int i=0;i<k;i++){
		ll a;
		cin>>a;
		if(n%a<rem){
			ans=i+1;
			c=n/a;
			rem=n%a;
		}
	}
	if(ans==0)
		cout<<1<<" "<<0<<endl;
	else
		cout<<ans<<" "<<c<<endl;
	return 0;
}