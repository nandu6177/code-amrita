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
	ll n;
	cin>>n;
	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll s,f;
	cin>>s>>f;
	ll c=f-s;
	ll sum=0,maxs=0,pos=1;
	for(int i=0;i<c;i++){
		sum+=a[i];
	}
	if(sum>maxs)
	{
		maxs=sum;
		pos=1;
	}
	for(int i=1;i<n;i++){
		sum-=a[i-1];
		sum+=a[(i+c)%n];
		if(sum>maxs)
		{
			maxs=sum;
			pos=i+1;
		}
	}
	ll ans=s;
	// cout<<pos<<endl;
	for(int j=pos;j>=1;j--){
		ans--;
		if(ans<=0)
			ans+=n;
	}
	// if(ans<=0)
		// ans+=n;
	cout<<ans<<endl;
}