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
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int n,m,c;
	cin>>n>>m>>c;
	int empty=n;
	vector<int> v(n);
	for(int i=0;i<m and empty>0;i++)
	{
		// cout<<"e"<<empty<<endl;
		int p;
		cin>>p;
		if(p<=c/2)
		{
			for(int j=0;j<n;j++)
			{
				if(v[j]==0 or v[j]>p)
				{
					if(v[j]==0)
						empty--;
					v[j]=p;
					cout<<j+1<<endl;
					break;
				}
			}
		}
		else
		{
			for(int j=n-1;j>=0;j--)
			{
				if(v[j]==0 or v[j]<p)
				{
					if(v[j]==0)
						empty--;
					v[j]=p;
					cout<<j+1<<endl;
					break;
				}
			}
		}
		fflush(stdout);
	}
	return 0;
}