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
	while(cin>>s)
	{
		int A=0,B=0,SB=5,SA=5;
		bool flag=0;
		for(ll i=0;i<10;i++)
		{
			char a,b;
			if(i%2)
			{
				b=s[i];
				SB--;
				if(b=='1')
					B++;
			}
			else
			{
				a=s[i];
				SA--;
				if(a=='1')
					A++;
			}
			
			// if(abs(A-B)>5-i-1)
			// {
			// cout<<A<<" "<<B<<endl;;
			if(B+SB<A)
			{
				// cout<<1<<endl;
				// cout<<SA<<" "<<SB<<" "<<A<<" "<<B<<endl;
				cout<<"TEAM-A "<<i+1<<endl;
				flag=1;
				break;
			}
			else if(A+SA<B)
			{
				// cout<<1<<endl;
				// cout<<SA<<" "<<SB<<" "<<A<<" "<<B<<endl;
				cout<<"TEAM-B "<<i+1<<endl;
				flag=1;
				break;
			}
			// }
		}
		if(flag)
			continue;
		for(ll i=10;i<19;i+=2)
		{
			char a=s[i],b=s[i+1];
			// cin>>a>>b;
			if(a=='1')
				A++;
			if(b=='1')
				B++;
			if(A>B)
			{
				cout<<"TEAM-A "<<i+2<<endl;
				flag=1;
				break;
			}
			else if(B>A)
			{
				cout<<"TEAM-B "<<i+2<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
			cout<<"TIE"<<endl;
	}
	return 0;
}