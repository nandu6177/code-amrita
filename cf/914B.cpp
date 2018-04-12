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
	vector<int> a(n);
	map<ll,ll> m;
	set<ll> s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
		m[a[i]]++;
	}
	// sort(all(a));
	ll f=0;
	set<ll> :: iterator it=s.end();
	it--;
	for(;it!=s.begin();it--)
	{
		f+=m[*it];
		if(f%2==0)
		{
			f=0;
		}
		else
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		f+=m[*it];
		if(f%2==1)
			f=1;
		else
			f=0;
	}
	if(f)
	{
		cout<<"Conan"<<endl;
	}
	else
		cout<<"Agasa"<<endl;
	return 0;
}