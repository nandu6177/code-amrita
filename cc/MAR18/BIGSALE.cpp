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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<double> price(n),dis(n),quan(n);
		for(int i=0;i<n;i++){
			cin>>price[i]>>quan[i]>>dis[i];
		}
		double loss=0;
		for(int i=0;i<n;i++){
			double newp=price[i]+(price[i]*dis[i])/100;
			newp-=(newp*dis[i])/100;
			loss+=(price[i]-newp)*quan[i];
		}
		cout<<fixed<<setprecision(5)<<loss<<endl;
	}
	return 0;
}