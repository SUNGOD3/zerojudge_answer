#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		int z=(1<<a);
		int ans[a]={0};
		while(z--){
			++ans[0];
			for(int i=0;i<a;++i){
				if(ans[i]>1){
					++ans[i+1];
					ans[i]=0;
				}
			}
			int c=0;
			for(int i=0;i<a;++i)
				if(ans[i])
					++c;
			if(c==b){
				for(int i=a-1;i>=0;--i)
					cout << ans[i]; 
				cout << "\n";
			}
		}
		if(n)cout << "\n";
	}
} 
