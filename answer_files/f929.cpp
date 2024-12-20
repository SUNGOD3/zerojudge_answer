#include <iostream>
#include <set>
using namespace std;
int n,m,a,is;
set <int> ss;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a;
		if(a==0)
			ss.insert(i);
	}
	cin >> m;
	while(m--){
		cin >> is;
		if(is==3){
			if(ss.size()==0)
				cout << "-1\n";
			else
				cout << *ss.begin() << "\n";
		}
		else if(is==2){
			cin >> a;
			ss.insert(a);
		}
		else if(is==1){
			cin >> a;
			if(a&&ss.size())
				ss.erase(ss.begin());
		}
	}
} 
