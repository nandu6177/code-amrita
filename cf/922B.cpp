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
	ll n;
	cin>>n;
	ll count=0;
	for(int a=1;a<=n;a++){
		for(int b=a+1;b<=n;b++){
			ll c=a^b;
			if(c>a and c>b and c<=n){
				if(a+b>c and b+c>a and a+c>b){
					// cout<<a<<" "<<b<<" "<<c<<endl; 
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}