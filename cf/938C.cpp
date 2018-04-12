#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<ll> v;
void initi(){
	// cout<<"start"<<endl;
	for(ll i=0;i*i<=1000000007;i++){
		// cout<<"sa"<<endl;
		v.pb(i*i);
	}
	// cout<<v.size()<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	initi();
	// cout<<"asd"<<endl;
	int t;
	cin>>t;
	while(t--){
		ll x;
		cin>>x;
		if(x==0){
			cout<<1<<" "<<1<<endl;
			continue;
		}
		else if(x==1){
			cout<<-1<<endl;
			continue;
		}
		ll n=lower_bound(all(v),x)-v.begin();
		// cout<<n<<" - "<<v[n]<<endl;
		int flag=0;
		if(v[n]-x==1 and n%2){
			cout<<n<<" "<<n-1<<endl;
			continue;
		}
		for(int i=n;i<v.size();i++){
			if((v[i]-x)%2==0 and (v[i]-x)/2<=i and v[i]-x>0 and (n/(v[i]-x))>0){
				cout<<i<<" "<<floor(2.0*n/((v[i]-x)))<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
			cout<<-1<<endl;
	}
	return 0;
}