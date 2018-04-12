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
	string s;
	cin>>s;
	for(int i=1;i<n;i++)
	{
		// ll count=0;
		if(s[i]==s[i-1] and s[i]!='?'){
			cout<<"No"<<endl;
			return 0;
		}
	}
	ll count=0;
	if(s[0]=='?' or s[n-1]=='?')
	{
		cout<<"Yes"<<endl;
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		if(s[i]=='?'){
			if(i+1<n and s[i-1]==s[i+1]){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
		if(s[i]==s[i-1] and s[i]=='?')
		{
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}