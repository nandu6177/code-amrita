#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;

ll power(ll x, ll y, ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
ll modInverse(ll a, ll m)
{
    return power(a, m-2, m);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		double l,d;
		ll t;
		cin>>l>>d>>t;
		double x=(asin(l/d)*180)/M_PI;
		ll a=x*10000000000;
		ll b=10000000000;
		ll angle=((a%360)*(modInverse(b,mod)%360))%360;
		ll angle=(angle*(t%360))%360;
		double x=(double)(1.0*angle*M_PI)/180;
		double d=l*sin(x);
		a=d*10000000000;
		// sin x= d/l;
	}
	return 0;
}