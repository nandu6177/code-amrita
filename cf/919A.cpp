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
	double n,m,a,b;
	cin>>n>>m;
	double ans=9999999999;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		a=a/b;
		a*=m;
		if(ans*10000000>a*10000000)
		{
			ans=a;
		}
	}
	cout<<fixed<<setprecision(10)<<ans<<endl;
	return 0;
}