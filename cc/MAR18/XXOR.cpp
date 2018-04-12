#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const ll mod=1000000007;

ll A[100001];
struct Node{
	ll data;
	Node *left, *right;
	Node(ll data=0,Node *left=NULL,Node *right=NULL){
		this->data=data;
		this->left=left;
		this->right=right;
	}
};
Node *build(ll start, ll end,bool mm)
{
    if(start == end)
    {
    	Node *temp=new Node(A[start],NULL,NULL);
        return temp;
    }
    else
    {
    	Node *temp=new Node();
        ll mid = (start + end) / 2;
        temp->left=build(start, mid, mm);
        temp->right=build(mid+1, end, mm);
        if(mm)
        	temp->data=min(temp->left->data,temp->right->data);
        else
        	temp->data=max(temp->left->data,temp->right->data);
        return temp;
    }
}

ll querymin(Node * node, ll start, ll end, ll l, ll r)
{
    if(r < start or end < l)
    {
        return 999999;
    }
    if(l <= start and end <= r)
    {
        return node->data;
    }
    ll mid = (start + end) / 2;
    ll p1 = querymin(node->left, start, mid, l, r);
    ll p2 = querymin(node->right, mid+1, end, l, r);
    return min(p1,p2);
}

ll querymax(Node * node, ll start, ll end, ll l, ll r)
{
    if(r < start or end < l)
    {
        return -1;
    }
    if(l <= start and end <= r)
    {
        return node->data;
    }
    ll mid = (start + end) / 2;
    ll p1 = querymax(node->left, start, mid, l, r);
    ll p2 = querymax(node->right, mid+1, end, l, r);
    return max(p1,p2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>A[i];
	Node *maxnode=build(0,n-1,0);
	Node *minnode=build(0,n-1,1);
	// cout<<x<<endl;
	while(q--){
		string s="1111111111111111111111111111111";
		ll l,r;
		cin>>l>>r;
		l--,r--;
		ll maxi=querymax(maxnode,0,n-1,l,r);
		ll mini=querymin(minnode,0,n-1,l,r);
		int c=0;
		// cout<<maxi<<endl;
		while(maxi>0){
			c++;
			maxi/=2;
		}
		for(int i=30;i>=0;i--){
			if(c>0){
				c--;
				s[i]='0';
			}
			else
				break;
		}
		int i=30;
		c=0;
		while(i>0 and mini>0){
			if(mini%2){
				s[i]='1';
			}
			else
				s[i]='0';
			i--;
			mini/=2;
			c++;
		}
		reverse(s.end()-c,s.end());
		unsigned long long ans=0,base=1;
		for(int i=30;i>=0;i--){
			cout<<s[i];
			if(s[i]=='1'){
				ans+=base;
			}
			base=base<<1;
		}
		cout<<ans<<endl;
	}
	return 0;
}