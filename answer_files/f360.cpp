#include <iostream>
using namespace std;
int a[10001];
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		int sl=s.length(),it=sl-1;
		for(int i=0;i<sl;++i){
			a[i]=s[i]-'0';
		}
		a[it]--;
		while(a[it]<0){
			a[it-1]--;
			a[it]+=10;
			--it;
		}
		for(int i=(a[0]==0?1:0);i<sl;++i){
			cout << a[i];
 		}
 		cout << "\n";
	}
}
