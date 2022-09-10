#include <iostream>
using namespace std;
int arr[500001],n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i(0);i<=500000;++i){
		int day(0),all(5+i*5),co(1+i);
		while(all>0){
			++day;
			all-=co;
			co=all/5;
			if(all%5)++co;
		}
		arr[i]=day;
	}
	while(cin >> n){
		if(n==-1)break;
		else cout << arr[n] << "\n";
	}
} 
