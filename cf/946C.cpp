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
	string s;
	cin>>s;
	int flag=0;
	char c='a';
	for(int i=0;i<s.size();i++){
		if(s[i]<=c)
		{
			s[i]=c;
			if(c=='z'){
				flag=1;
				break;
			}
			c++;
		}
	}
	if(flag){
		cout<<s<<endl;
	}
	else
		cout<<-1<<endl;
	return 0;
}