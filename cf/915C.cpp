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
	ll a,b;
	cin>>a>>b;
	int cnt=0,cnt1=0;
	map<int,int> m;
	ll n=a,bdash=0;
	while(n>0)
	{
		m[n%10]++;
		n/=10;
		cnt++;
	}
	n=b;
	while(n>0)
	{
		bdash=bdash*10+n%10;
		n/=10;
		cnt1++;
	}
	n=bdash;
	if(cnt1>cnt)
		goto x;
	while(n>0)
	{
		if(m[n%10]>0)
		{
			cout<<n%10;
			m[n%10]--;
		}
		else
		{
			for(int i=n%10;i>=0;i--)
			{
				if(m[i]>0)
				{
					cout<<i;
					m[i]--;
					break;
				}
			}
			cnt--;
			break;
		}
		cnt--;
		n/=10;
	}
	x:
		for(int i=9;i>=0;i--)
		{
			while(m[i]>0)
			{
				cout<<i;
				m[i]--;
			}
		}
	cout<<endl;
	return 0;
}