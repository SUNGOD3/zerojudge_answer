#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
		if(a==0&&b==0)break;
		int x[100001]={0},y[100001]={0},t,xa=0,ya=0;
		while(a--){
			cin >> t;
			++x[t];
		}
		while(b--){
			cin >> t;
			++y[t];
		}
		for(int i=0;i<100001;++i){
			if(x[i]&&y[i]){
				x[i]=0;
				y[i]=0;
			}
		}
		for(int i=0;i<100001;++i){
			if(x[i])
				++xa;
			if(y[i])
				++ya;
		}
		cout << min(xa,ya) << "\n";
	}
} 
