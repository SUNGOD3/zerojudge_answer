#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,ans;
	bool p;
	string a;
	cin >> n;
	getline(cin,a);
	while(n--){
		getline(cin,a);
		a+=' ';
		ans=0;
		p=0;
		for(int al(a.length()-1),i(0),tmp(0);i<al;++i,tmp=0){
			if(a[i]=='-'){
				++i;p=1;
			}
			while(a[i]!=' '){
				tmp=(tmp<<3)+(tmp<<1)+a[i]-48;
				++i; 
			}
			(p)?ans-=tmp,p=0:ans+=tmp;
		}
		cout << ans << "\n";
	}
} 
