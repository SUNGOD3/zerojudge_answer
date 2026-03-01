#include <iostream>
#include <vector>
using namespace std;
struct shop{
	bool bad=0;
	vector <int> a;
};shop c[10001];
bool chat(int no){
	if(c[no].bad==1)return 1;
	for(auto i=c[no].a.begin();i!=c[no].a.end();++i){
		if(chat(*i)==1){
			c[no].bad=1;
			return 1;
		}
	}
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m,l,q,x,y;
	while(cin >> n >> m >> l >> q){
		while(m--){
			cin >> x >> y;
			c[y].a.push_back(x);
		}
		while(l--){
			cin >> x;
			c[x].bad=1;
		}
		while(q--){
			cin >> x;
			(chat(x)==1)?cout << "TUIHUOOOOOO\n":cout << "YA~~\n";
		}
	}
} 
