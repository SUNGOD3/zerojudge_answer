#include <iostream>
using namespace std;
struct tree{
	char v;
	tree *r;
	tree *l; 
};
string a,b;
tree* bt(int pre,int mid,int l){
	if(l<=0)return NULL;
	tree *T=new tree;
	T->v=a[pre];
	int i=0;
	while(a[pre]!=b[mid+i]){
		++i;
	}
	T->l=bt(pre+1,mid,i);
	T->r=bt(pre+i+1,mid+i+1,l-i-1);
	return T;
}
void f(tree* t){
	if(t==NULL)return;
	if(t->l!=NULL)f(t->l);
	if(t->r!=NULL)f(t->r);
	cout << t->v ;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a >> b){
		tree *head=bt(0,0,a.length());
		f(head);
		cout << "\n";
	}
} 
