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
	vector<ll> f(1001);
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=1000;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	ll n;
	cin>>n;
	for(int i=1,j=2;i<=n;i++)
	{
		if(i==f[j])
		{
			j++;
			cout<<"O";
		}
		else
			cout<<'o';
	}
	cout<<endl;
	return 0;
}