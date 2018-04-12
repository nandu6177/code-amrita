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
	int n,a,b;
	cin>>n>>a>>b;
	/*if(a==1 or b==1){
		for(int i=0;i<n;i++)
			cout<<i+1<<" ";
		cout<<endl;
		return 0;
	}
	if(n%a==0){
		for(int i=0;i<n;i++){
			if(i%a==0){
				cout<<i+a<<" ";
			}
			else
				cout<<i<<" ";
		}
			cout<<endl;
			return 0;
	}
	if(n%b==0){
		b=a;
		for(int i=0;i<n;i++){
			if(i%a==0){
				cout<<i+a<<" ";
			}
			else
				cout<<i<<" ";
		}
			cout<<endl;
			return 0;
	}*/
	ll x=n/a;
	ll y=n%a;
	// int f=0;
	while(x>=0 and y%b!=0){
		x--;
		y+=a;
	}
	if(x<0 or y%b!=0){
		cout<<-1<<endl;
	}
	else{
		for(int i=0;i<x*a;i++){
			if(i%a==0){
				cout<<i+a<<" ";
			}
			else
				cout<<i<<" ";
			// cout<<endl;
		}

		for(int i=x*a,j=0;i<n;i++,j++){
			if(j%b==0){
				cout<<i+b<<" ";
			}
			else
				cout<<i<<" ";
			// cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}