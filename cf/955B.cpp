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
	char prev=s[0];
	s[0]='.';
	int pos=0;
	while(1){
		int f=0;
		for(int i=pos+1;i<s.size();i++)
		{
			if(s[i]!=prev and s[i]!='.'){
				prev=s[i];
				s[i]='.';
				f=1;
				if(i==pos+1)
					pos++;
			}
		}
		if(f==0)
			break;
		// cout<<s<<" "<<prev<<endl;
	}
	int c=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!='.')
			c++;
	}
	if(c>1){
		cout<<"No"<<endl;
	}
	else
		cout<<"Yes"<<endl;
	return 0;
}