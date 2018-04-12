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
	int i=0,j=0;
	ll count=0;
	for(i=0,j=1;i<n and j<n;i++,j++){
		if(s[i]=='U' and s[j]=='R' or (s[i]=='R' and s[j]=='U')){
			count++;
			i++;
			j++;
		}
	}
	cout<<n-count<<endl;
	return 0;
}