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
	string s;
	cin>>s;
	ll ans=0;
	for(int i=0;i<s.size();i++)
	{
		int cur=0,noq=0;
		for(int j=i;j<s.size();j++)
		{
			if(s[j]=='(')
				cur++;
			else if(s[j]==')')
				cur--;
			else
				noq++;
			if(cur<0)
			{
				break;
			}
			if(noq>cur)
			{
				noq--;
				cur++;
			}
			if(noq-cur>=0)
			{
				// cout<<i<<" "<<j<<endl;
				// for(int c=i;c<=j;c++)
				// 	cout<<s[c];
				// cout<<endl;
				ans++;
			}
			// cout<<j<<" "<<cur<<endl;
		}
	}
	cout<<ans<<endl;
	return 0;
}