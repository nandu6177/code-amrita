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
	while(n--){
		string s;
		cin>>s;
		map<char,ll> m;
		for(int i=0;i<s.size();i++)
			m[s[i]]++;
		if(m['a']>0 and m['e']>0 and m['i']>0 and m['o']>0 and m['u']>0)
			cout<<s<<endl;
	}
	return 0;
}