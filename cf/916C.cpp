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
	ll n,m,prime=999999937;
	cin>>n>>m;
	if(m>1)
		cout<<2<<" "<<999999937<<endl;
	else
		cout<<2<<" "<<2<<endl;
	cout<<1<<" "<<n<<" "<<2<<endl;
	prime-=2;
	m--;
	ll i=1,j=2;
	while(m>0)
	{
		if(i==1 and j<n-1)
		{
			cout<<i<<" "<<j<<" "<<1<<endl;
			j++;
			m--;
			prime--;
		}
		else if(i==1 and j==n-1)
		{
			cout<<i<<" "<<j<<" "<<prime<<endl;
			m--;
			j++;
		}
		else if(i==1 and j==n)
		{
			j++;
		}
		else
		{
			cout<<i<<" "<<j<<" "<<1000000000<<endl;
			m--;
			j++;	
		}
		if(j>n)
		{
			// cout<<"A";
			i++;
			j=i+1;
		}
	}
	return 0;
}