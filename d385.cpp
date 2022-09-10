#include <iostream>
#include <algorithm>
using namespace std;
int n;
string a[51];
bool cmp(string x,string y){
	if(x+y>y+x)
		return 1;
	return 0;
}
int main(){
	while(cin >> n){
		if(n==0)break;
		for(int i=0;i<n;++i)
			cin >> a[i];
		sort(a,a+n,cmp);
		for(int i=0;i<n;++i)
			cout << a[i];
		cout << "\n";
	}
} 
