#include <iostream> 
using namespace std;
int sl;
string s;
bool isrev(int l,int r){
	for(int i=l,j=0;i<=r;++i,++j){
		if(s[i]!=s[r-j])return 0;
	}
	return 1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		sl=s.length();	
		for(int i=0;i<sl;++i){
			if(isrev(i,sl-1)){
				cout << s;
				for(int j=i-1;j>=0;--j){
					cout << s[j];
				}
				cout << "\n";
				break;
			}
		}
	}
}
