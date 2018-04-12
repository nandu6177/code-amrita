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
		map<ll,ll> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		ll count=0;
		map<ll,ll>::iterator it=m.begin();
		for(;it!=m.end();it++){
			count+=it->ss-1;
		}
		cout<<count<<endl;
	}
	return 0;
}