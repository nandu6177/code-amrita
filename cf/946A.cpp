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
	int n;
	cin>>n;
	vector<ll> a(n);
	ll mini=101,negs=0,poss=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0)
			negs+=a[i];
		else
			poss+=a[i];
		mini=min(mini,a[i]);
	}
	if(negs==0)
		cout<<poss<<endl;
	else
		cout<<poss-negs<<endl;
	return 0;
}