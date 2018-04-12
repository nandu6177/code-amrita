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
	int flag=1;
	while(flag==1){
		flag=0;
		for(int i=0;i<n-1;i++){
			if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')
			{
				if(s[i+1]=='a' or s[i+1]=='e' or s[i+1]=='i' or s[i+1]=='o' or s[i+1]=='u' or s[i+1]=='y'){
					// s.delete(i);
					// s.erase(i+1);
					s[i+1]='.';
					flag=1;
					// i--;
					// n--;
				}
			}
		}
		int f=1;
		while(f==1){
			f=0;
			// cout<<"2";
			for(int i=0;i<n-1;i++){
				if(s[i]=='.' and s[i+1]!='.'){
					f=1;
					swap(s[i],s[i+1]);
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]!='.')
			cout<<s[i];
	}
	cout<<endl;
	return 0;
}