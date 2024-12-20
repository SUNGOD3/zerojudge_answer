#include <iostream>
using namespace std;
struct com{
	string name;
	int l,r;
};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,d,q,dq;
	cin >> t;
	while(t--){
		cin >> d;
		com a[d];
		for(int i=0;i<d;++i)
			cin >> a[i].name >> a[i].l >> a[i].r;
		cin >> dq;
		for(int j=0;j<dq;++j){
			cin >> q;
			int ans,c=0;
			for(int i=0;i<d;++i){
				if(a[i].l<=q&&a[i].r>=q){
					ans=i;
					++c;
				}
				if(c>1)break;
			}
			if(c!=1)
				cout << "UNDETERMINED\n";
			else
				cout << a[ans].name << "\n";
		}
		if(t)cout << "\n";
	}
} 
