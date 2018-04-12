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
	int n,u;
	cin>>n>>u;
	vector<ll> v(n),sum(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(i==0)
			sum[i]=v[i];
		else
			sum[i]=sum[i-1]+v[i];
	}
	double d=0;
	for(int i=0;i<n;i++){
		int I=v[i];
		int pos=(lower_bound(v.begin()+i,v.end(),I+u)-v.begin());
		if(pos==n)
		{
			pos--;
		}
		if(v[pos]-I>u){
			pos--;
		}
		if(pos<=i)
			continue;
		double temp=0;
		if(i+1<n and pos>i+1)
			temp=((double)(v[pos]-v[i+1]))/((double)(v[pos]-I));
		d=max(temp,d);
	}
	if(d-0<=(double)(1e-10))
	{
		cout<<-1<<endl;
		return 0;
	}
	cout<<fixed<<setprecision(10)<<d<<endl;
	return 0;
}