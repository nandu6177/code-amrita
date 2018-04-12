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
	int hh,mm;
	cin>>hh>>mm;
	int h,d,c,n;
	cin>>h>>d>>c>>n;
	ll count=0;
	if(hh<20){
		while(hh<20){
			mm++;
			if(mm==+60){
				mm=0;
				hh++;
			}
			count++;
		}
	}
	cout<<fixed<<setprecision(5)<<min(ceil(1.0*(count*d+h)/n)*(0.8*(float)c),ceil(1.0*h/n)*c)<<endl;
	return 0;
}