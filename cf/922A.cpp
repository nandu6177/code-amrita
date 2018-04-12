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
	ll x,y;
	cin>>y>>x;
	if(y==0){
		if(x==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		return 0;
	}
	y-=(x-1);
	if(x==0){
		cout<<"No"<<endl;
		return 0;
	}
	else if(x==1){
		if(y>0){
			cout<<"No"<<endl;
			return 0;
		}
	}
	if(y>=0 and y%2==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}