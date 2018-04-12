#include<bits/stdc++.h>
#define ff first
#define ss second 
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
typedef long long ll;
using namespace std;
const ll mod=1000000007;
 
ll A[100002];
 
struct Node{
	ll a,b,c;
	Node *left,*right;
	Node(){
		this->a=0;
		this->b=0;
		this->c=0;
		this->left=NULL;
		this->right=NULL;
	}
};
 
Node *build(int start,int end){
	if(start==end){
		Node *temp=new Node();
		temp->a=A[start];
		return temp;
	}
	Node *temp=new Node();
	int mid=(start+end)/2;
	temp->left=build(start,mid);
	temp->right=build(mid+1,end);
	vector<ll> v(6);
	v[0]=temp->left->a;
	v[1]=temp->left->b;
	v[2]=temp->left->c;
	v[3]=temp->right->a;
	v[4]=temp->right->b;
	v[5]=temp->right->c;
	sort(all(v));
	temp->a=v[5];
	temp->b=v[4];
	temp->c=v[3];
	return temp;
}
 
void update(Node *node,int start,int end,int ind,int val){
	if(start==end){
		A[ind]=val;
		node->a=val;
	}
	else{
		int mid=(start+end)/2;
		if(start<=ind and ind<=mid){
			update(node->left,start,mid,ind,val);
		}
		else{
			update(node->right,mid+1,end,ind,val);
		}
		vector<ll> v(6);
		v[0]=node->left->a;
		v[1]=node->left->b;
		v[2]=node->left->c;
		v[3]=node->right->a;
		v[4]=node->right->b;
		v[5]=node->right->c;
		sort(all(v));
		node->a=v[5];
		node->b=v[4];
		node->c=v[3];
	}
}
 
vector<ll> query(Node *node,int start,int end,int l,int r){
	if(r<start or end<l){
		vector<ll> v(3,0);
		return v;
	}
	if(l<=start and end<=r){
		vector<ll> v(3);
		v[0]=node->a;
		v[1]=node->b;
		v[2]=node->c;
		return v;
	}
	int mid=(start+end)/2;
	vector<ll> v1=query(node->left,start,mid,l,r);
	vector<ll> v2=query(node->right,mid+1,end,l,r);
	vector<ll> v(6);
	v[0]=v1[0];
	v[1]=v1[1];
	v[2]=v1[2];
	v[3]=v2[0];
	v[4]=v2[1];
	v[5]=v2[2];
	sort(all(v));
	v1[0]=v[5];
	v1[1]=v[4];
	v1[2]=v[3];
	return v1;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	Node *node=build(1,n);
	while(q--){
		int ty,x,y;
		cin>>ty>>x>>y;
		if(ty==1){
			update(node,1,n,x,y);
		}
		else{
			vector<ll> v=query(node,1,n,x,y);
			while(y>=x and (v[0]+v[1]<=v[2] or v[0]+v[2]<=v[1] or v[1]+v[2]<=v[0])){
				y--;
				v=query(node,1,n,x,y);
			}
			if(v[1]==0 or v[2]==0 or v[0]==0){
				cout<<0<<endl;
				continue;
			}
			else{
				cout<<v[0]+v[1]+v[2]<<endl;
			}
		}
	}
	return 0;
}