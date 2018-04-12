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
	ll l,r,a;
	cin>>l>>r>>a;
	while(a>0){
		if(l<r)
			l++;
		else if(r<=l)
			r++;
		a--;
	}
	cout<<min(l,r)*2<<endl;
	return 0;
}