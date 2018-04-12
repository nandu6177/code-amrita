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
	string s;
	cin>>s;
	for(ll i=0;i<m;i++)
	{
		int l,r;
		char c1,c2;
		cin>>l>>r>>c1>>c2;
		for(ll j=l-1;j<r;j++)
		{
			if(s[j]==c1)
				s[j]=c2;
		}
	}
	cout<<s<<endl;
	return 0;
}