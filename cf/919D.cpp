#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<vector<int> > v(300001);
vector<bool> vis(300001,0),V(300001,0);
ll dfs(ll root,vector<bool> visi,string s,vector<int> ch)
{
	ch[(int)(s[root-1]-'a')]++;
	ll a=0;
	// cout<<root<<endl<<endl;;
	int flag=0;
	V[root]=1;
	if(visi[root]==1)
	{
		return -1;
	}
	visi[root]=1;
	for(ll i=0;i<v[root].size();i++)
	{
		flag=1;
		if(visi[v[root][i]]==1)
		{
			// cout<<-1<<endl;
			return -1;
		}
		ll x=dfs(v[root][i],visi,s,ch);
		if(x==-1)
			return -1;
		a=max(a,x);
		// return a;
	}
	if(flag)
		return a;
	ll ans=0;
	for(int i=0;i<26;i++)
	{
		// cout<<(char)(i+'a')<< " "<<ch[i]<<endl;
		ans=max(ans,(ll)ch[i]);
	}
	return ans;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	for(int i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		if(x==y)
		{
			cout<<-1<<endl;
			return 0;
		}
		vis[y]=1;
	}
	// cout<<v[4][0]<<endl;
	ll path=-1;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			vector<bool> visi(n+1,0);
			vector<int> ch(26);
			ll z=dfs(i,visi,s,ch);
			if(z==-1)
			{
				cout<<-1<<endl;
				return 0;
			}
			path=max(path,z);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(V[i]==0)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<path<<endl;
	return 0;
}