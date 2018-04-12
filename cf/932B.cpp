#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
vector<int> g(1000001);
vector<vector<int> > g1(1000001,vector<int> (10)); 
void init(){
	for(int i=1;i<=1000000;i++){
		int x=i;
		if(x<10){
			g[i]=x;
			continue;
		}
		int prod=1;
		while(x>0){
			if((x%10)!=0)
				prod=prod*(x%10);
			x/=10;
		}
		g[i]=g[prod];
	}
	for(int i=1;i<1000001;i++){
		g1[i]=g1[i-1];
		g1[i][g[i]]++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init();
	int q;
	cin>>q;
	while(q--){
		int l,r,k;
		cin>>l>>r>>k;
		cout<<g1[r][k]-g1[l-1][k]<<endl;;
	}
	return 0;
}