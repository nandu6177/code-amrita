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
	vector<string> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	 // vector<bool> row(n),col(m);
	vector<vector<vector<int> > > V(n,vector<vector<int> > (m));
 	for(int i=0;i<n;i++)
	{
		// vector<bool> r(m);
		vector<int> l;
		for(int j=0;j<m;j++)
		{
			if(v[i][j]=='#'){
				l.pb(j);
			}
		}
		for(int j=0;j<m;j++){
			if(v[i][j]=='#')
				V[i][j]=l;
		}
	}
	for(int i=0;i<m;i++){
		int f=-1;
		vector<int> l;
		for(int j=0;j<n;j++){
			if(v[j][i]=='#' and f==-1){
				l=V[j][i];
				f++;
			}
			else if(v[j][i]=='#'){
				if(V[j][i]!=l)
				{
					// cout<<i<<" "<<j<<" "<<l.size()<<" ";
					// for(int k=0;k<V[j][i].size();k++)
					// {
					// 	cout<<V[j][i][k]<<" ";
					// }
					cout<<"No"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}