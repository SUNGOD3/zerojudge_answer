#include <iostream>
using namespace std;
typedef struct tree *node;
struct tree{
	int val;
	node right=NULL;
	node left=NULL;
};
void put(int tmp,tree* a){
	if(tmp>a->val){
		if(a->right==NULL){
			node k=new tree;
			k->val=tmp;
			a->right=k;
			return;
		}
		else{
			put(tmp,a->right);
		}
	}
	else if(tmp<a->val){
		if(a->left==NULL){
			node k=new tree;
			k->val=tmp;
			a->left=k;
			return;
		}
		else{
			put(tmp,a->left);
		}
	}
}
void pt(tree* a){
	if(a!=NULL){
		cout << a->val << " ";
		pt(a->left);
		pt(a->right);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,tmp,x;
	while(cin >> n){
		node ans=new tree;
		cin >> x;
		ans->val=x;
		--n;
		while(n){
			--n;
			cin >> tmp;
			put(tmp,ans);
		}
		pt(ans);
		cout << "\n";
	}
} 
