#include <iostream>
using namespace std;
string s;
int a[5]={16,8,4,2,1},ans;
int main(){
	cin >> s;
	for(int i=0;i<5;++i){
		if(s[i]=='1'){
			ans+=a[i];
		}
	}
	cout << ans;
}
