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
	int a,b;
	cin>>a>>b;
	int len=abs(a-b);
	a=len/2;
	b=len-len/2;
	cout<<(a*(a+1))/2+(b*(b+1))/2<<endl;
	return 0;
}