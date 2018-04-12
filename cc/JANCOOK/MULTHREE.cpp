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
	int t;
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>k;
		int d0,d1;
		cin>>d0>>d1;
		vector<ll> d;
		d.pb(d0);
		d.pb(d1);
		if(k==2)
		{
			if((d1+d0)%3==0)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
			continue;
		}
		int curd=d1;
		ll sum=d1+d0,s1=d1+d0;
		curd=sum%10;
		s1=s1%3;
		d.pb(curd);
		k-=2;
		while(k>0 and curd!=8 and curd!=5 and curd!=0)
		{
			// cout<<'a'<<" "<<endl;
			sum+=curd;
			s1+=curd;
			s1=s1%3;
			sum=sum%10;
			if(curd!=8 and curd!=5 and curd!=0)
				d.pb(curd);
			else
				break;
			curd=sum;
			k--;
		}
		if(curd==8)
		{
			s1+=((k/4)*(20))%3;
			k=k%4;
			if(k==1)
			{
				s1+=8;
			}
			else if(k==2)
				s1+=6;
			else if(k==3)
				s1+=2;
			if(s1%3==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(curd==5)
		{
			s1+=((k/2)*5)%3;
			if(k%2)
				s1+=5;
			s1=s1%3;
			if(s1%3==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(curd==0)
		{
			if(s1%3==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}