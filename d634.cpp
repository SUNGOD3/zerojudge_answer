#include <iostream>
#include <algorithm>
using namespace std;
inline bool cmp(string x,string y){
	for(int i=0;i<=11;++i){
		if(x[i]>y[i])
			return 0;
		else if(x[i]<y[i])
			return 1;
	}
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a;
	cin >> a;
	string b[a];
	getline(cin,b[0]);
	for(int i=0;i<a;++i){
		getline(cin,b[i]);
		for(int j=b[i].length();j<=10;++j){
			b[i]+=' ';
		}
	}
	sort(b,b+a,cmp);
	for(int i=0;i<a;++i)
		cout << b[i] << "\n";
} 
