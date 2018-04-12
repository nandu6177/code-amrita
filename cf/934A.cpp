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
	int n,m;
	cin>>n>>m;
	vector<ll> a(n),b(m),v;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(all(a));
	sort(all(b));
	ll mini=9999999999999,maxi=-9999999999999;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m;j++)
		{
			// cout<<a[i]<<" "<<b[j]<<endl;;
			maxi=max(maxi,a[i]*b[j]);
		}
	}
	ll maxi2=-9999999999999;
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++)
		{
			// cout<<a[i]<<" "<<b[j]<<endl;
			maxi2=max(maxi2,a[i]*b[j]);
		}
	}
	// sort(all(v));
	cout<<min(maxi,maxi2)<<endl;
	return 0;
}