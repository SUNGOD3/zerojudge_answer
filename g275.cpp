#include <iostream>
using namespace std;
int q;
bool a[7][2];
int main(){
	cin >> q;
	while(q--){
		string ans;
		int aa=0,bb=0,cc=0;
		for(int j=0;j<2;++j){
			for(int i=0;i<7;++i){
				cin >> a[i][j];
			}
		}
		for(int j=0;j<2;++j){
			if(a[1][j]==a[3][j]||a[1][j]!=a[5][j]){
				aa=1;
			}
		}
		if(a[6][0]==0||a[6][1]==1){
			bb=1;
		}
		for(int i=1;i<6;i+=2){
			if(a[i][0]==a[i][1]){
				cc=1;
			}
		}
		if(aa)ans+='A';
		if(bb)ans+='B';
		if(cc)ans+='C';
		if(ans==""){
			cout << "None\n";
		}
		else{
			cout << ans << "\n";
		}
	}
} 
