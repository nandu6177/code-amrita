#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<ll> p(1<<22,0),p_(1<<22,0);
double val[200][200][200];
ll prime=25*(1<<22)+1;
vector<ll> fft(vector<ll > p,ll n,ll c){
	if(n==1)
		return p;
	vector<ll> p1(n/2),p2(n/2);
	for(int i=0,j=0;i<n/2 and j<n;i++,j+=2){
		p1[i]=p[j];
		// cout<<p1[i].real()<<endl;
	}
	for(int i=0,j=1;i<n/2 and j<n;i++,j+=2){
		p2[i]=p[j];
		// cout<<p2[i].real()<<endl;
	}
	p1=fft(p1,n/2,(c*c)%prime);
	p2=fft(p2,n/2,(c*c)%prime);
	ll ohm=1;
	for(int i=0;i<n/2;i++){
		p[i]=p1[i]+(ohm*p2[i])%prime;
		p[i]=p[i]%prime;
		p[i+n/2]=p1[i]-(ohm*p2[i])%prime+prime;
		p[i+n/2]=p[i+n/2]%prime;
		ohm=(ohm*c)%prime;
	}
	return p;
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
	cout<<prime<<endl;
	ll n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>p[i];
	ll w=power(3,25,prime);
	cout<<w<<endl;
	p=fft(p,1<<22,w);
	for(int i=0;i<n;i++)
		cout<<p[i]<<endl;
	p=fft(p,1<<22,modInverse(w,prime));
	for(int i=0;i<n;i++)
		cout<<(p[i]*modInverse(w,prime))%prime<<endl;
	
} 