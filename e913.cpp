#include <iostream>
using namespace std;
bool p[123457]={1,1};
int ans[123457],c=0;
int main(){
	for(int i=2;i<=352;++i)
		for(int j=i+i;j<=123456;j+=i)
			p[j]=1;
	for(int i=2;i<=123456;++i){
		if(p[i]==0&&p[i-2]==0)
			++c;
		ans[i]=c;
	}
	while(cin >> c)
		cout << ans[c] << "\n";
} 
