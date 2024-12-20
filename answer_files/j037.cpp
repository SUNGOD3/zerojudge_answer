#include <iostream>
#include <algorithm>
using namespace std;
int a[3];
int main(){
	while(1){
		for(int i=0;i<3;++i)cin >> a[i];
		if(a[0]+a[1]+a[2]==0)return 0;
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])cout << "right\n";
		else cout << "wrong\n";
	}
} 
