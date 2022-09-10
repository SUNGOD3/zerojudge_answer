#include <iostream>
using namespace std;
string a;
int n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int ca=1;ca<=n;++ca){
		cin >> a;
		int al=a.length(),t=0,s[3]={0},r=0;
		for(int i=0;i<al;++i){
			t+=a[i]-'0';
			++s[(a[i]-'0')%3];
		}
		while(s[t%3]){
			++r;
			--s[t%3];
			t=0;
		}
		cout << "Case " << ca << ": ";
		if(r%2)
			cout << "S\n";
		else
			cout << "T\n";
	}
} 
