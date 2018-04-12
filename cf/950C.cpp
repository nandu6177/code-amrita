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
	string s;
	cin>>s;
	string s1=s;
	vector<vector<ll> > v;
	int i=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0'){
			bool f=0;
			for(int j=0;j<v.size();j++)
			{
				if(s1[v[j][v[j].size()-1]-1]=='1' and i>=v[j][v[j].size()-1]){
					v[j].pb(i+1);
					f=1;
					break;
				}
			}
			if(!f){
				vector<ll> a(1,i+1);
				v.pb(a);
			}
		}
		else{
			bool f=0;	
			for(int j=0;j<v.size();j++)
			{
				if(s1[v[j][v[j].size()-1]-1]=='0' and i>=v[j][v[j].size()-1]){
					v[j].pb(i+1);
					f=1;
					break;
				}
			}
			if(!f)
			{
				cout<<-1<<endl;
				return 0;
			}
		}
	}
	for(int i=0;i<v.size();i++){
		if(v[i].size()%2==0){
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].size()<<" ";
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}