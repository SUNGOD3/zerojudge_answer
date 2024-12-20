#include <iostream>
using namespace std;
string ans[1001];
int main(){
	int t;
	cin >> t;
	string v;
	char c;
	while(t--){
		int a[1001]={0},it=0;
		while(cin >> a[it]){
			++it;
			c=getchar();
			if(c=='\n')break;
		}
		for(int i=0;i<it;++i){
			cin >> v;
			ans[a[i]-1]=v;
		}
		for(int i=0;i<it;++i)
			cout << ans[i] << "\n";
		if(t)cout << "\n"; 
	}
} 
