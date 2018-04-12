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
	ll n,m;
	cin>>n>>m;
	if(n==0 or m==0){
		cout<<n<<" "<<m<<endl;
		return 0;
	}
	int flag=1;
	while(n!=0 and m!=0 and flag){
		flag=0;
		if(n>=2*m){
			n=n%(2*m);
			flag=1;
			continue;
		}
		if(m>=2*n)
		{
			m=m%(2*n);
			flag=1;
		}
	}
	cout<<n<<" "<<m<<endl;
	return 0;
}