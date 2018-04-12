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
	cout<<s;
	// s.reverse(all(s));
	for(int i=s.size()-1;i>=0;i--){
		cout<<s[i];
	}
	// cout<<s<<endl;
	cout<<endl;
	return 0;
}