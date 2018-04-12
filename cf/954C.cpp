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
	vector<ll> a(n);
	ll maxi=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	if(n==1){
		cout<<"YES"<<endl;
		cout<<1<<" "<<maxi<<endl;
		return 0;
	}
	set<ll> s;
	for(int i=1;i<n;i++){
		// if(a[i]-a[i-1])
		s.insert(abs(a[i]-a[i-1]));
	}
	set<ll> :: iterator it=s.begin();
	ll x=-1,y=-1;
	if(s.size()==1){
		if(*it==1){
			y=maxi;
			x=1;
		}
		else
			y=*it;
	}
	else if(s.size()==2){
		if(*it!=1){
			cout<<"NO"<<endl;
			return 0;
		}
		else{
			it++;
			y=*it;
		}
	}
	else{
		cout<<"NO"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		a[i]=a[i]%y;
	}
	for(int i=1;i<n;i++){
		if((a[i-1]==0 and a[i]==1) or (a[i-1]==1 and a[i]==0)){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	if((ll)(ceil(1.0*maxi/y))<=1000000000 and y<=1000000000){
		cout<<"YES"<<endl;
		cout<<(ll)(ceil(1.0*maxi/y))<<" "<<y<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}