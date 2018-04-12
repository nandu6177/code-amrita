#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<bool> vis(300001,0);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,d;
	cin>>n>>k>>d;
	vector<int> p(k);
	queue<pair<int,int> > q;
	set<int> s;
	vector<vector<pair<int,int> > > v(n+1);
	for(int i=0;i<k;i++)
	{
		cin>>p[i];
		vis[p[i]]=1;
		q.push(mp(p[i],0));
	}
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].pb(mp(b,i+1));
		v[b].pb(mp(a,i+1));
	}
	while(!q.empty())
	{
		int a=q.front().ff;
		int D=q.front().ss;
		q.pop();
		if(D==d)
			continue;
		for(int i=0;i<v[a].size();i++)
		{
			if(vis[v[a][i].ff]==1)
			{
				continue;
			}
			else
			{
				s.insert(v[a][i].ss);
				vis[v[a][i].ff]=1;
				q.push(mp(v[a][i].ff,D+1));
			}
		}
	}
	set<int>::iterator it=s.begin();
	cout<<n-s.size()-1<<endl;
	for(int i=1;i<n;i++)
	{
		if(s.find(i)==s.end())
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}