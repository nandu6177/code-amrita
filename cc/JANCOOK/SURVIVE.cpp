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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s;
		cin>>n>>k>>s;
		int day=1,noc=0;
		if(7*k>6*n)
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
			int chocneed=s*k;
			int maxbuy=(s-s/7)*n;
			if(maxbuy<chocneed)
				cout<<-1<<endl;
			else
			{
				cout<<s-s/7-(maxbuy-chocneed)/n<<endl;
			}
		}
	}
	return 0;
}