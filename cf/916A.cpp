#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
bool check(int a)
{
	while(a>0)
	{
		if(a%10==7)
			return 1;
		a/=10;
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x;
	cin>>x;
	int hh,mm;
	cin>>hh>>mm;
	ll ans=0;
	while(!check(hh) and !check(mm))
	{
		mm-=x;
		if(mm<0)
		{
			mm+=60;
			hh--;
		}
		if(hh<0)
		{
			hh+=24;
		}
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}