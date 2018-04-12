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
	ll n,m;
	cin>>n>>m;
	map<string,string> ma;
	for(int i=0;i<n;i++)
	{
		string a,b;
		cin>>a>>b;
		ma[b]=a;
		// ma[b]=a;
	}
	for(int i=0;i<m;i++)
	{
		string a,b;
		cin>>a>>b;
		cout<<a<<" "<<b<<" ";
		b=b.substr(0,b.size()-1);
		// cout<<b<<endl;
		cout<<"#"<<ma[b]<<endl;
	}
	return 0;
}