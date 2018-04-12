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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> m;
		if(s.size()<4){
			cout<<"normal"<<endl;
			continue;
		}
		m[s[0]]++;
		m[s[1]]++;
		m[s[2]]++;
		m[s[3]]++;
		int ans=0;
		if(m['c']>0 and m['h']>0 and m['e']>0 and m['f']>0)
			ans++;
		for(int i=4;i<s.size();i++){
			m[s[i-4]]--;
			m[s[i]]++;
			if(m['c']>0 and m['h']>0 and m['e']>0 and m['f']>0)
				ans++;
		}
		if(ans>0){
			cout<<"lovely "<<ans<<endl;
		}
		else
			cout<<"normal"<<endl;
	}
	return 0;
}