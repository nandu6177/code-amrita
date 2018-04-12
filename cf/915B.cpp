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
	int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	int ans=0;
	if(pos<l)
	{
		ans+=l-pos+1;
		if(r<n)
		{
			ans+=r-l+1;
		}
	}
	else if(pos>r)
	{
		ans+=pos-r+1;
		if(l>1)
		{
			ans+=r-l+1;
		}
	}
	else if(pos>=l and pos<=r)
	{
		if(l>1 and r==n)
		{
			ans+=pos-l+1;
		}
		else if(r<n and l==1)
		{
			ans+=r-pos+1;
		}
		else if(l>1 and r<n)
		{
			ans+=min(pos-l+1,r-pos+1)+r-l+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}