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
	ll k,p;
	cin>>k>>p;
	ll sum=0;
	for(ll i=1;i<=k;i++)
	{
		ll n=i,rev=0,c=0;
		while(n>0)
		{
			rev=rev*10+n%10;
			n/=10;
			c++;
		}
		//cout<<pow(10,c)*i+rev<<endl;	
		sum+=pow(10,c)*i+rev;
		sum=sum%p;
	}
	cout<<sum<<endl;
	return 0;
}