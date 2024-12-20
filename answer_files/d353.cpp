#include <iostream>
using namespace std;
string ans[32]={"1"};
int main(){
	for(int i=0;i<31;++i){
		string b;
		char c=ans[i][0];
		int tmp=0;
		for(int j=0,al=ans[i].length();j<al;++j){
			if(c!=ans[i][j]){
				b+=tmp+48;
				b+=c;
				c=ans[i][j];
				tmp=1;
			}
			else{
				++tmp;
			}
		}
		b+=tmp+48;
		b+=c;
		ans[i+1]=b;
	}
	int n;
	while(cin >> n)
		cout << ans[n] << "\n";
} 
