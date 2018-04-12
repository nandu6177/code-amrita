#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<int> v(1001,0),steps(1001,0);
vector<ll> fact(1001,1),minv(1001);
ll modInverse(ll a, ll m)
{
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
 
        t = x0;
 
        x0 = x1 - q * x0;
 
        x1 = t;
    }
 
    // Make x1 positive
    if (x1 < 0)
       x1 += m0;
 
    return x1;
}



void facta()
{
	for(int i=1;i<1001;i++)
	{
		fact[i]=(fact[i-1]*i)%mod;
	}
}
void func()
{
	steps[1]=0;
	steps[2]=1;
	v[1]=1;
	v[2]=1;
	for(int i=3;i<1001;i++)
	{
		ll count=0,x=i;
		while(x>0)
		{
			if(x%2)
				count++;
			x/=2;
		}
		v[i]=count;
		steps[i]=steps[count]+1;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	func();
	facta();
	string s;
	cin>>s;
	ll k;
	cin>>k;
	if(k==1)
	{
		cout<<s.size()<<endl;
		return 0;
	}
	else if(k==0)
	{
		cout<<1<<endl;
		return 0;
	}
	ll count=0,ans=0;
	int pos=0,c0=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')
			count++;
		else
		{
			pos=i;
			c0++;
		}
	}
	ll x=count;
	ll n=s.size();
	for(int i=n-1;i>0;i--)
	{
		for(int j=i-1;j>0;j--)
		{
			// cout<<j<<" "<<steps[j]<<endl;
			if(steps[j+1]+1==k)
			{
				// cout<<"aa"<<endl;
				ans+=(((fact[i-1]*modInverse(fact[i-1-j],mod))%mod)*(modInverse(fact[j],mod)))%mod;
				ans=ans%mod;
			}		
		}
	}
	count--;
	while(count--)
	{
		if(steps[count+1]+1==k)
		{
			// cout<<"asas"<<endl;
			ans+=(((fact[s.size()-1]*modInverse(fact[s.size()-count-1],mod))%mod)*(modInverse(fact[count],mod)))%mod;
			ans=ans%mod;
		}
		// count--;
	}
	if(steps[x]+1==k)
	{
		// cout<<pos<<" "<<pos-c0<<" "<<c0<<endl;
		// cout<<(((fact[pos]*modInverse(fact[pos-c0],mod))%mod)*modInverse(fact[c0],mod))%mod<<endl;;
		ans+=(((fact[pos]*modInverse(fact[pos-c0],mod))%mod)*modInverse(fact[c0],mod))%mod;
	}
	cout<<ans%mod<<endl;
	return 0;
}