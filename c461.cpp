#include <iostream>
using namespace std;
int main(){
	int a,b,cc;
	while(cin >> a >> b >> cc){
		bool aa=a,bb=b,im=0;
		if(bb==cc&&aa==cc){
			cout << "AND\n";
			im=1;
		}
		else if(aa!=bb&&cc==0){
			cout << "AND\n";
			im=1;
		}
		if(aa==1||bb==1){
			if(cc==1){
				cout << "OR\n";
				im=1;
			}
		}
		else if(aa==0&&bb==0){
			if(cc==0){
				cout << "OR\n";
				im=1;
			}
		}
		if(aa!=bb){
			if(cc==1){
				cout << "XOR\n";
				im=1;
			}
		}
		else{
			if(cc==0){
				cout << "XOR\n";
				im=1;
			}
		}
		if(im==0){
			cout << "IMPOSSIBLE\n";
		}
	}
} 
