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
	ll x;
	cin>>x;
	string s;
	while(x>0){
		if(x%2)
			s+='1';
		else
			s+='0';
		x/=2;
	}
	reverse(all(s));
	cout<<s<<endl;
	return 0;
}