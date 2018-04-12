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
	int n,q;
	cin>>n>>q;
	// vector<ll> a(n);
	vector<vector<ll> > v(n+1,vector<ll> (32,0));
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		int j=31;
		while(j>=0){
			if(a%2)
				v[i+1][j]=v[i][j]+1;
			else
				v[i+1][j]=v[i][j];
			a/=2;
			j--;
		}
		// for(int j=0;j<32;j++)
		// 	cout<<v[i+1][j]<<" ";
		// cout<<endl;
	}
	while(q--){
		ll l,r;
		cin>>l>>r;
		ll tot=r-l+1;
		ll ans=0,base=1;
		for(int i=31;i>0;i--){
			if(v[r][i]-v[l-1][i]<ceil(1.0*tot/2)){
				ans+=base;
			}
			base=base*2;
		}
		cout<<ans<<endl;
	}
	return 0;
}	