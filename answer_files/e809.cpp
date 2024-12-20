#include <iostream>
using namespace std;
int a[27],n,tp;
string ans,aa,tmp;
int main(){
	cin >> aa;
	cin >> tmp;
	cin >> n;
	int tmpl=tmp.length(),aal=aa.length();
	for(int i=0;i<tmpl;++i){
		++a[tmp[i]-'A'];
	}
	for(int i=0;i<aal;++i){
		int ai=aa[i]-'A';
		while(a[ai]--){
			ans+=ai+'A';
		}
	}
	while(n--){
		cin >> tp;
		cout << ans[tp-1] << "\n";
	}
} 
