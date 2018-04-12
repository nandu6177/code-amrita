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
		vector<ll> l(n),g(n);
		for(int i=0;i<n;i++)
			cin>>l[i];
		for(int i=0;i<n;i++)
			cin>>g[i];
		bool f1=0,f2=0;
		for(int i=0;i<n;i++){
			if(l[i]>g[i])
				f1=1;
			if(l[i]>g[n-i-1])
				f2=1;
		}
		if(f1 and f2)
			cout<<"none"<<endl;
		else if(f1 and !f2)
			cout<<"back"<<endl;
		else if(!f1 and f2)
			cout<<"front"<<endl;
		else
			cout<<"both"<<endl;
	}
	return 0;
}