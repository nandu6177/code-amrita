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
	ll p,k;
	cin>>p>>k;
	ll l=-500000000000000,r=500000000000000;
	ll mid=0;
	if(mid+k<k and mid<0 and mid+k>=0 and mid*k+p<k and mid*k+p>=0){
		cout<<3<<endl;
		cout<<1<<" "<<mid+k<<" "<<mid*k+p<<endl;
		return 0;
	}
	if(mid+k>=k or mid*k+p>=k or mid>=0){
		r=mid;
	}
	else if(mid+k<0 or mid*k+p<0){
		l=mid;
	}
	while(l<=r){
		mid=l+(r-l)/2;
		if(mid+k<k and mid<0 and mid+k>=0 and mid*k+p<k and mid*k+p>=0){
			cout<<3<<endl;
			cout<<1<<" "<<mid+k<<" "<<mid*k+p<<endl;
			return 0;
		}
		if(mid+k>=k or mid*k+p>=k or mid>=0){
			r=mid;
		}
		else if(mid+k<0 or mid*k+p<0){
			l=mid;
		}
		cout<<mid<<" "<<l<<" "<<r<<endl;
	}
	cout<<-1<<endl;
	return 0;
}