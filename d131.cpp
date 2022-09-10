#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int k;
	while(cin >> k){
		if(k==0)break;
		cout << k << "! = ";
		int ans[101]={0},ma=0,col=0;
		for(int i=2;i<=k;++i){
			int tmp=i;
			for(int j=2;tmp!=1;++j){
				while(tmp%j==0){
					++ans[j];
					tmp/=j;
					ma=max(j,ma);
				}
			}
		}
		for(int i=0;i<=ma;++i){
			if(ans[i]){
				cout << setw(2) <<ans[i] << " ";
				++col;
				if(col%15==0){
					cout << "\n"; 
				}
			}
		}
		cout << "\n";
	}
} 
