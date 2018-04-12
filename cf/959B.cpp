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
	ll n,k,m;
	cin>>n>>k>>m;
	vector<string> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	vector<ll> cost(n);
	map<string,ll> ma;
	for(int i=0;i<n;i++){
		cin>>cost[i];
		ma[v[i]]=cost[i];
	}
	for(int i=0;i<k;i++){
		ll x;
		cin>>x;
		vector<ll> ind(x);
		ll minc=9999999999,mini=-1;
		for(int j=0;j<x;j++){
			cin>>ind[j];
			if(minc>cost[ind[j]-1]){
				minc=cost[ind[j]-1];
				mini=ind[j]-1;
			}
		}
		for(int j=0;j<x;j++){
			ma[v[ind[j]-1]]=minc;
		}
	}
	ll ans=0;
	for(int i=0;i<m;i++)
	{
		string s;
		cin>>s;
		ans+=ma[s];
	}
	cout<<ans<<endl;
	return 0;
}