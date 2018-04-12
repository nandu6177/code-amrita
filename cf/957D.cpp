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
	int n;
	cin>>n;
	vector<ll> v(n),cum(n),no(n);
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	ll nom=1;
	no[0]=1;
	for(int i=1;i<n;i++){
		if(v[i]+1>nom){
			int l=v[i]+1-nom;
			cum[l]++;
			cum[i]--;
			nom=v[i]+1;
			no[i]=nom;
		}
		// cum[i]-=nom;
	}
	// ll sum=0;
	for(int i=1;i<n;i++)
	{
		cum[i]=cum[i-1]+cum[i];
		cout<<cum[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(i==0){
			sum+=max((ll)0,cum[0]+no[i]-1-v[i]);
		}
		else
		{
			sum+=max((ll)0,cum[i]-cum[i-1]+no[i]-1-v[i]);
		}
	}
	cout<<sum<<endl;
	return 0;
}