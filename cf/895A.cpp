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
	int ans=360,sum=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		sum+=a;
		ans=min(ans,abs(360-sum-sum));
	}
	cout<<ans<<endl;
	return 0;
}