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
	string s;
	cin>>s;
	ll count=0;
	for(int i=0;i<n;i++){
		bool flag=0;
		count++;
		int j,k;
		for(j=i+1,k=0;j<n and k<=i;j++,k++){
			if(s[j]!=s[k])
			{
				flag=1;
				break;
			}
		}
		if(!flag and k==i+1){
			i=2*i;
		}
	}
	cout<<count<<endl;
	return 0;
}