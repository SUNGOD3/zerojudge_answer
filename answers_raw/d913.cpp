#include <iostream>
#include <algorithm>
using namespace std;
int ans[6]={1,2,3,4,5,6},chat[6][7];
int main(){
	for(int i=0;i<6;++i){
		for(int j=0;j<7;++j){
			cin >> chat[i][j];
		}
	}
	do{
		bool c=1;
		for(int i=0;i<6&&c;++i){
			int tmp=0;
			for(int j=0;j<6&&c;++j){
				if(ans[j]==chat[i][j]){
					++tmp;
				}
			}
			if(tmp!=chat[i][6]){
				c=0;
			}
		}
		if(c){
			for(int i=0;i<6;++i){
				cout << ans[i] << " ";
 			}
 			cout << "\n";
 			break;
		}
	}while(next_permutation(ans,ans+6));
} 
