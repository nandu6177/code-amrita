#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll MOD=1000000007;

ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin>>q;
	while(q--)
	{
		ll n,l;
		cin>>n>>l;
		// cout<<fast_exp(2,0)<<endl;
		cout<<(fast_exp(n-1,min(n,l))*fast_exp(n,l-n))%MOD<<endl;
	}
	return 0;
}