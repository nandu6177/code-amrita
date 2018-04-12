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
		ll n;
		cin>>n;
		ll ca=0,cb=0,count=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='a')
				ca++;
			if(s[i]=='b')
				cb++;
			if(ca>cb)
				count++;
		}
		if(n==1){
			cout<<count<<endl;
			continue;
		}
		ll c=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='a')
				ca++;
			if(s[i]=='b')
				cb++;
			if(ca>cb)
				c++;
		}
		cout<<count+c*(n-1)<<endl;
	}
	return 0;
}