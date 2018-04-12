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
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=1,j=1000000;
	int t=0;
	int c=n;
	for(int k=0,l=n-1;c>0;i++,j--,t++){
		if(a[k]==i)
		{
			k++;
			c--;
		}
		if(a[l]==j){
			l--;
			c--;
		}
	}
	cout<<t-1<<endl;
	return 0;
}