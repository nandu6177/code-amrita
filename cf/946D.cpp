#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;
void func(ll n,ll m,ll k){
	ll c=0;
	for(int i=0;i<n;i++)
	{
		char ch;
		cin>>ch;
		if(ch=='1')
			c++;
	}
	cout<<max(c-k,(ll)0)<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	if(m==1){
		func(n,m,k);
		return 0;
	}
	vector<string> s(n);
	vector<ll> v(n);
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n;i++){
		ll l=-1,r=-1;
		for(int j=0;j<m;j++){
			if(s[i][j]=='1' and l==-1){
				l=j;
			}
			if(s[i][j]=='1')
				r=j;
		}
		if(r==-1)
			v[i]=0;
		else
			v[i]=r-l+1;
	}
	while(k--){
		ll row=-1,col=-1,diff=0;
		for(int i=0;i<n;i++){
			ll l=-1,r=-1;
			for(int j=0;j<m;j++){
				if(s[i][j]=='1' and l==-1){
					l=j;
				}
				if(s[i][j]=='1')
					r=j;
			}
			if(l==-1 or r==-1)
				continue;
			ll d1=0,d2=0,f=0;
			// cout<<s[i]<<endl;
			for(int I=l+1;I<m;I++){
				f=1;
				if(s[i][I]=='1')
					break;
				d1++;
				if(I==m-1)
					d1=0;
			}
			if(f)
			d1++;
			for(int I=r-1;I>=0;I--){
				f=1;
				if(s[i][I]=='1')
					break;
				d2++;
				if(I==0)
					d2=0;
			}
			if(f)
			d2++;
			// cout<<d1<<" diff "<<i<<" "<<d2<<endl;
			// if(d1>d2){
				if(d1>diff){
					diff=d1;
					row=i;
					col=l;
				}
			// }
			// else if(d2>=d1){
				if(d2>diff){
					diff=d2;
					row=i;
					col=r;
				}
			/*if(r==-1)
				v[i]=0;
			else
				v[i]=r-l+1;*/
		}
		if(row!=-1 and col!=-1){
			v[row]-=diff;
			s[row][col]='0';
		}
		// else
			// cout<<"blank"<<endl;
	}
	// for(int i=0;i<n;i++)
	// 	cout<<s[i]<<endl;
	ll sum=0;
	for(int i=0;i<n;i++)
		sum+=v[i];
	cout<<sum<<endl;
	return 0;
}