#include <iostream>
using namespace std;
int n,a[205],d=1;
string s[205],k,ans;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> s[i];
	}
	while(d){
		d=0;
		for(int i=0;i<n;++i){
			if(a[i]<s[i].size()){
				if(s[i][a[i]]>='A'&&s[i][a[i]]<='Z'){
					ans+=s[i][a[i]];
				}
				++a[i];
				d=1;
			}
		}
	}
	cout << ans;
} 
