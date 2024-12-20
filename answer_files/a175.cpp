#include <iostream>
#include <set>
using namespace std;
struct tb{
	set <int> index;
};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int k,m,is,n;
	while(cin >> k >> m){
		tb a[m];
		while(k--){
			cin >> is;
			if(is == 1){
				cin >> n;
				a[n%m].index.insert(n);
			}
			else if(is == 2){
				cin >> n;
				a[n%m].index.erase(n);
			}
			else{
				cout << "===== s =====\n";
				for(int i=0;i<m;++i){
					cout << "[" << i/100 << (i%100)/10 << i%10 << "]:";
					for(auto j=a[i].index.begin();j!=a[i].index.end();++j){
						cout << *j << " -> ";
					}
					cout << "NULL\n";
				}
				cout << "===== e =====\n";
			}
		}
	}
} 
