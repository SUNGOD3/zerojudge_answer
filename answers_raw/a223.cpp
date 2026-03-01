#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		if(a==".")break;
		else{
			int al=a.length(),ans[al]={0},it=0,rz=0;
			for(int i=1;i<al;++i){
				if(a[i]==a[it]){
					ans[i]=it+1;
					++it;
				}
				else{
					ans[i]=0;
					rz=i;
					it=0;
				}
			}
			cout << "\n";
			if(rz>al/2||al%(rz+1)){
				cout << "1\n";
			}
			else{
				cout << al/(rz+1) << "\n";
			}
		}
	}
}
