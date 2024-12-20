#include <iostream>
using namespace std;
int b[10001],n,m,it,lit,rit;
struct node {
	node *left = nullptr, *right = nullptr;
	int lw = 0, rw = 0;
} s[2000001];
int cal(node *tmp) {
	if (!tmp->left && !tmp->right)
		return tmp->lw;
	tmp -> lw = cal(tmp->left);
	tmp -> rw = cal(tmp->right);
	return tmp->lw+tmp->rw;
}
int Dis(int w, node *tmp) {
	while (tmp->left||tmp->right) {
		if (tmp->lw <= tmp->rw) {
			tmp->lw += w;
			tmp = tmp->left;
		}
		else {
			tmp->rw += w;
			tmp = tmp->right;
		}
	}
	return (tmp-s);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=n;i<n*2;++i){
		cin >> s[i].lw;
	}
	for(int i=0;i<m;++i){
		cin >> b[i];
	}
	for(int i=1;i<n;++i){
		cin >> it >> lit >> rit;
		s[it].left = &s[lit];
		s[it].right = &s[rit];
	}
	cal(&s[1]);
	for (int i=0;i<m;++i)
		cout << Dis(b[i], &s[1]) << ' ';
}
