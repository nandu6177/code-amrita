#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<ll> prime;
void sieve(){
	vector<bool> v(10001);
	for(int i=2;i<10001;i++){
		if(v[i]==0){
			prime.pb(i);
			for(int j=2*i;j<10001;j+=i){
				v[j]=1;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	sieve();
	while(t--){
		int n;
		cin>>n;
		int i=0;
		while(n>1){
			bool f=0;
			while(n%prime[i]==0){
				f=1;
				n/=prime[i];
			}
			if(f)
			cout<<prime[i]<<" ";
			i++;
		}
		cout<<endl;
	}
	return 0;
}