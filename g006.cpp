#include <iostream>
using namespace std;
int ans[26];
string a;
int main(){
	cin >> a;
	for(int i=0;i<a.length();++i){
		++ans[a[i]-'A'];
	}
	while(1){
		int ma=0;
		string tmp;
		for(int i=0;i<26;++i){
			if(ans[i]>ma){
				tmp = 'A'+i;
				ma = ans[i];
			}
			else if(ans[i]==ma){
				tmp += 'A'+i;
			}
		}
		if(ma==0)break;
		for(int i=0;i<tmp.length();++i){
			ans[tmp[i]-'A']=0;
			cout << tmp[i];
		}
	} 
} 
