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
	string ss,s1;
	cin>>ss;
	s1=ss;
	vector<vector<ll> > v;
	vector<pair<char,ll> > s(s.size());
	for(int i=0;i<ss.size();i++){
		s[i]=mp(ss[i],i);
	}
	while(s.size()>0){
		ll size=0;
		vector<ll> ans;
		bool f=0;
		for(int i=0,j=0;i<s.size();i++){
			if((ans.size()==0 or (ans.size()>0 and s1[ans[ans.size()-1]-1]=='1')) and s[i].ff=='0'){
				ans.pb(s[i].ss+1);
				// j++;
				f=1;
				s.erase(s.begin()+i);
				i--;
				// s[i]='-';
				size++;
				// cout<<0<<" wala "<<i+1<<endl;
			}
			if(ans.size()>0 and s1[ans[ans.size()-1]-1]=='0' and s[i].ff=='1'){
				ans.pb(s[i].ss+1);
				// j++;
				s.erase(s.begin()+i);
				f=1;
				i--;
				// s[i]='-';
				size++;
				// cout<<1<<" wala "<<i+1<<endl;
			}
		}
		if(ans.size()>0 and s1[ans[ans.size()-1]-1]=='0')
			v.pb(ans);
		else if(ans.size()>1)
		{
			s1[ans[ans.size()-1]-1]='1';
			// s.insert(s.begin(),mp('1',ans[ans.size()-1]-1)]='1';
			ans.pop_back();
			v.pb(ans);
		}
		if(!f)
			break;
	}
	ll c=0;
	for(int i=0;i<s.size();i++){
		if(s[i].ff=='1')	
		{
			cout<<-1<<endl;
			return 0;
		}
		else if(s[i].ff=='0')
			c++;
	}
	// cout<<s<<endl;
	cout<<v.size()+c<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i].size()<<" ";
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}