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
		int n;
		cin>>n;
		vector<ll> a(n);
		ll maxi=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			maxi=max(maxi,a[i]);
		}
		int c,d,s;
		cin>>c>>d>>s;
		cout<<fixed<<setprecision(7)<<(1.0*maxi*(c-1))<<endl;
	}
	return 0;
}