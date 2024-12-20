#include <iostream>
#define maxv 100000000
#define minv -100000000
using namespace std;
int num[50001],n,q,a,b;
int nc=0;
struct node{
	int l,r;
	int min,max;
	node *left, *right;
}; 
node tree[100000];
void build(node *now,int l,int r){
	now->l = l;
	now->r = r;
	if(l==r){
		now->min=now->max=num[l];
		return;
	}
	++nc;
	now->left = tree+nc;
	++nc;
	now->right = tree+nc;
	int m=(l+r)>>1;
	build(now->left,l,m);
	build(now->right,m+1,r);
	now->max = max(now->left->max, now->right->max);
	now->min = min(now->left->min, now->right->min);
}
int ans_max , ans_min;
void query(node *rt, int l, int r){
	if(rt->l == l && rt->r == r){
		ans_max = ans_max > rt->max ? ans_max : rt->max;
		ans_min = ans_min < rt->min ? ans_min : rt->min;
		return ;
	}
	int m = (rt->l + rt->r) >> 1;
	if(r <= m){
		query(rt->left, l, r);
	}else if(l > m){
		query(rt->right, l, r);
	}else{
		query(rt->left, l, m);
		query(rt->right, m + 1, r);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> q;
	for(int i=0;i<n;i++)
		cin >> num[i];
	build(tree,0,n);
	while(cin >> a >> b){
		ans_max=minv;
		ans_min=maxv;
		query(tree,a-1,b-1);
		cout << ans_max-ans_min << "\n";
	}
}
