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
	vector<int> v(n),p,v1;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;){
		int c=0;
		while(v[i]==1 and i<n){
			i++;
			c++;
		}
		p.pb(c);
		c=0;
		while(v[i]==2 and i<n){
			i++;
			c++;
		}
		p.pb(c);
	}
	if(p.size()==2){
		cout<<p[0]+p[1]<<endl;
		return 0;
	}
	p.pb(0);
	while(!(p.size()%2))
		p.pb(0);
	// p.pb(0);
	ll maxi=0,pos=0;
	for(int i=1;i<p.size();i+=2){
		if(p[i]+p[i+1]>maxi){
			maxi=p[i]+p[i+1];
			pos=i;
		}
	}
	ll a=p[pos];
	p[pos]=0;
	p[pos+2]+=a;
	p[pos-1]+=p[pos+1];
	p[pos+1]=0;
	ll sum1=0,ans=0;
	for(int i=0;i<p.size();i++){
		if(i%2==0){
			sum1+=p[i];
		}
		else if(p[i]>0){
			ans=max(ans,sum1+p[i]);
			sum1=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}