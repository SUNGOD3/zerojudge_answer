#include <iostream>
#include <cmath>
using namespace std;
bool ok(int x){
	int sv = sqrt(x+1);
	if((x+1)!=(sv*sv))return 0;
	++sv;
	int ct=0;
	for(int j=1;j<=sv;++j){
		if(x%j==0){
			++ct;
		}
	}
	if(ct==4)return 1;
	return 0; 
}
int main(){
	for(int i=1000;i<10000;++i){
		if(ok(i)){
			cout << i;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}
