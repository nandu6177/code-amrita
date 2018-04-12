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
	int t;
	cin>>t;
	while(t--){
		ll n,h,k=0;
		cin>>n>>h;
		vector<ll> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			k=max(k,a[i]);
		}
		ll l=1,r=k,prev=0;
		/*if(h==n){
			cout<<k<<endl;
			continue;
		}*/
		while(r>=l){
			k=l+(r-l)/2;
			// cout<<l<<" "<<r<<" "<<k<<endl;
			ll ans=0;
			for(int i=0;i<n;i++){
				ans+=ceil(1.0*a[i]/k);
			}
			if(ans>h)
				l=k+1;
			else if(ans<=h){
				r=k-1;
				prev=k;
			}
			/*else{
				prev=k;
				// break;
			}*/
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			ans+=ceil(1.0*a[i]/l);
		}
		if(ans<=h){
			cout<<l<<endl;
		}
		else
			cout<<prev<<endl;
	}
	return 0;
}