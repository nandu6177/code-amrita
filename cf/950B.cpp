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
	int n,m;
	cin>>n>>m;
	vector<ll> x(n),y(m);
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<m;i++)
		cin>>y[i];
	int i=0,j=0	;
	ll count=0,sum1=x[0],sum2=y[0];
	for(;i<n and j<m;){
		if(sum1==sum2){
			count++;
			sum1=0;
			sum2=0;
			if(i!=n-1)
			{
				i++;
				sum1+=x[i];
			}
			else if(j!=m-1){
				j++;
				sum2+=y[j];
			}
			else
				break;
		}
		else if(sum1>sum2){
			if(j!=m-1){
				j++;
				sum2+=y[j];
			}
			else break;
		}
		else{
			if(i!=n-1)
			{
				i++;
				sum1+=x[i];
			}
			else
				break;
		}
		// cout<<sum1<<" "<<sum2<<endl;
	}
	cout<<count<<endl;
	return 0;
}