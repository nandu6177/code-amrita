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
		ll n,q;
		cin>>n>>q;
		vector<ll> a(n+1);
		for(int i=1;i<=n;i++)
			cin>>a[i];
		while(q--){
			ll x,pos=-1;
			cin>>x;
			for(int i=1;i<=n;i++){
				if(a[i]==x){
					pos=i;
					break;
				}
			}
			ll low=1,high=n;
			while(low<=high){
				mid=(low+high)/2;
				if(a[mid]==x)
					break;
				else if()
			}
		}
	}
	return 0;
}