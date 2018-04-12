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
	ll n;
	cin>>n;
	int k;
	cin>>k;
	priority_queue<ll> q;
	ll a=n,i=0,cnt=0;
	while(a>0)
	{
		if(a%2)
			q.push(i);
		i++;
		a/=2;
		cnt++;
	}
	// cout<<q.top()<<endl;
	if(cnt>k)
	{
		cout<<"No"<<endl;
		return 0;
	}
	while(q.size()<k)
	{
		ll x=q.top();
		q.pop();
		q.push(x-1);
		q.push(x-1);
		// cnt++;
		// k--;
	}
	cout<<"Yes"<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}