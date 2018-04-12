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
		int n,m,x,k;
		cin>>n>>m>>x>>k;
		string s;
		cin>>s;
		int even=0,odd=0;
		for(int i=0;i<k;i++){
			if(s[i]=='E')
				even++;
			else
				odd++;
		}
		int nop=0;
		for(int i=1;i<=m;i++){
			if(i%2){
				nop+=min(x,odd);
				odd-=min(x,odd);
			}
			else{
				nop+=min(x,even);
				even-=min(x,even);
			}
		}
		if(nop>=n){
			cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	return 0;
}