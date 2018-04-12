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
	// k++;
	if(k>=n)
	{
		cout<<"No"<<endl;
		return 0;
	}
	for(int i=2;i<=k;i++){
		ll x=n%i;
		// if(x==(n-k)/i)
			// continue;/
		x=(n-x)/i;
		if((k>=x and (x!=i) and x!=1) or n%i==0){
			cout<<i<<endl;
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}