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
	int n,k,ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(k%a==0)
		{
			ans=max(ans,a);
		}
	}
	cout<<k/ans<<endl;
	return 0;
}