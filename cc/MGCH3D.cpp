#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define      rep(i, n)         for(long long int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;
const ll mod=1000000007;
ll p[1<<22],p_[1<<22];
double val[200][200][200];
ll tmp[1<<22];
ll prime=25*(1<<22)+1;
inline ll pow_(ll a, ll n, ll p=mod){
ll r=1;
while(n){if(n&1)r=r*a%p;n>>=1;a=a*a%p;}return r;}
inline ll inv_(ll a) {return pow_(a, mod-2, mod);}
inline ll add(ll a, ll b){a+=b;if(a>=mod)a-=mod;return a;}
inline ll mul(ll a, ll b){return a*1ll*b%mod;}
inline ll sub(ll a, ll b){a-=b;if(a<0)a+=mod;return a;}

void fft(ll * ar, ll n, ll w) {
	if (n == 1) return ;
	ll n2 = n>>1;
	for (ll i = 1; i < n; i += 2) tmp[i/2] = ar[i];
	rep(i, n2) ar[i] = ar[i<<1];
	rep(i, n2) ar[i+n2] = tmp[i];
	fft(ar, n2, mul(w, w));
	fft(ar + n2, n2, mul(w, w));
	ll c = 1;
	rep(i, n2) {
		ll toMul = mul(c, ar[i+n2]);
		ar[i+n2] = sub(ar[i], toMul);
		ar[i] = add(ar[i], toMul);
		c = mul(c, w);
	}
}

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
    // ll g = gcd(a, m);
    // if (g != 1)
        // cout/ << "Inverse doesn't exist";
    // else
    // {
        // If a and m are relatively prime, then modulo inverse
        // is a^(m-2) mode m
        // cout << "Modular multiplicative inverse is "
             return power(a, m-2, m);
    // }
}
 
// To compute x^y under modulo m

 


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,q,base=156;
	cin>>n>>q;
	ll offset = 77;
	ll MM=1<<22;
	// init();
	vector<ll> x(n),y(n),z(n);
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i]>>z[i];
		p[x[i]*base*base+y[i]*base+z[i]]=1;
		p_[(77-x[i])*base*base+(77-y[i])*base+(77-z[i])]=1;
	}
	ll w=power(3,25,prime);
	// cout<<w<<endl;
	// return 0;
	fft(p,MM,w);
	fft(p_,MM,w);
	for(int i=0;i<MM;i++){
		p[i]=(p[i]*p_[i])%prime;
	}
	//inverse
	ll g_=modInverse(w,prime),mm=modInverse(MM,prime);
	fft(p,MM,g_);
	for(int i=0;i<MM;i++){
		p[i]=(p[i]*mm)%prime;
	}
	for(int i=-77;i<=77;i++){
		for(int j=-77;j<=77;j++){
			for(int k=-77;k<=77;k++){
				if(i==0 and j==0 and k==0)
					continue;
				ll x=p[(i+77)*base*base+(j+77)*base+k+77]+0.5;
				double den=sqrt(pow(i,4)+pow(j,4)+pow(k,4));
				val[i+77][j+77][k+77]=1.0*x/den;
			}
		}
	}
	while(q--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		double sum=0;
		for(int i=-77;i<=77;i++){
			for(int j=-77;j<=77;j++){
				for(int k=-77;k<=77;k++){
					if(i==0 and j==0 and k==0)
						continue;
					sum+=abs(a*i+b*j+c*k+d)*val[i+77][j+77][k+77];
				}
			}
		}
		// cout<<fixed<<setprecision(20)<<sum<<endl;
		sum=sum/(n*(n-1));
		cout<<fixed<<setprecision(20)<<sum<<endl;
	}
	return 0;
}