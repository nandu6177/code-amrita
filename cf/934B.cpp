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
	ll k;
	cin>>k;
	if(ceil(1.0*k/2)>19){
		cout<<-1<<endl;
		return 0;
	}
	else if(ceil(1.0*k/2)==19){
		if(k%2){
			cout<<4;
			k--;
		}
		while(k-=2){
			cout<<8;
		}
		cout<<endl;
		return 0;
	}
	else{
		if(k%2){
			k--;
			cout<<4;
		}
		while(k>1){
			cout<<8;
			k-=2;
		}
		if(k==-1)
			cout<<4;
		cout<<endl;
	}
	return 0;
}