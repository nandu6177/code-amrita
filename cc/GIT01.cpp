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
		int n,m;
		cin>>n>>m;
		int c1=0,c2=0;
		char a[n][m],b[n][m],c[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>c[i][j];
				if(i%2)
				{
					if(j%2)
					{
						a[i][j]='R';
						b[i][j]='G';
					}
					else
					{
						a[i][j]='G';
						b[i][j]='R';
					}
				}
				else
				{
					if(j%2)
					{
						a[i][j]='G';
						b[i][j]='R';
					}
					else
					{
						a[i][j]='R';
						b[i][j]='G';
					}
				
				}
				if(c[i][j]!=a[i][j])
				{
					if(c[i][j]=='R')
						c1+=5;
					else
						c1+=3;
				}
				if(c[i][j]!=b[i][j])
				{
					if(c[i][j]=='R')
						c2+=5;
					else
						c2+=3;
				}
			}
		}
		cout<<min(c1,c2)<<endl;
	}
	return 0;
}