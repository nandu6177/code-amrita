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
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i<n;i++){
			int c1=0,c2=0;
			if(s[i]=='1'){
				int j=i-1;
				while(j>=0){
					if(s[j]=='0')
						c1++;
					else
						break;
					j--;
				}
				i++;
				while(i<n){
					if(s[i]=='0')
						c2++;
					else
						break;
					i++;
				}
				i--;
			}
			c+=min(c1,c2);
		}
		cout<<c<<endl;
	}
	return 0;
}