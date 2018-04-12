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
	ll k,i;
	cin>>k;
	for(i=1;k>0;i++)
	{
		ll x=i,sum=0;
		while(x>0)
		{
			sum+=x%10;
			x=x/10;
		}
		if(sum==10)
			k--;
	}
	cout<<i-1<<endl;
	return 0;
}