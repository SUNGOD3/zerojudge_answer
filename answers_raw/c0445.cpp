#include <iostream>
using namespace std;
string ans[101];
int ml,i,al[101];
int main(){
	while(getline(cin,ans[i])){
		al[i]=ans[i].length();
		ml=max(al[i],ml);
		++i;
	}
	for(int k=0;k<ml;++k){
		for(int j=i-1;j>=0;--j)
			(k>=al[j])?cout << ' ':cout << ans[j][k];
		cout << "\n";
	}
} 
