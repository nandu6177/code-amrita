#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define vll vector<long long>
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
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
		vll s(n),presum(n),votes(n);
		for(int i=0;i<n;i++)
			cin>>s[i];
		presum[0]=s[0];
		for(int i=1;i<n;i++)
			presum[i]=presum[i-1]+s[i];
		vll::iterator it=s.begin();
		for(int i=0;i<n;i++){
			if(i>0){
				ll l=0;
				ll r=i-1;
				while(r>=l){
					ll mid=l+(r-l)/2;
					if(presum[i]-presum[mid]-s[i]<=s[i]){
						r=mid-1;
					}
					else
						l=mid+1;
				}
				cout<<abs(i-r)<<endl;
				votes[i]+=abs(i-r);
			}
			if(i<n-1){
				ll l=i+1;
				ll r=n-1;
				while(r>=l){
					ll mid=l+(r-l)/2;
					if(presum[mid]-presum[i]-s[mid]<=s[i]){
						l=mid+1;
					}
					else
						r=mid-1;
				}
				votes[i]+=abs(r-i);
				cout<<abs(r-i)<<endl;
			}
		}
		for(int i=0;i<n;i++){
			cout<<votes[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}