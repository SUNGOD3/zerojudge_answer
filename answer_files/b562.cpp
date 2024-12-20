#include <iostream>
using namespace std;
int a[17]={1};
int main(){
	for(int i=1;i<17;++i)
		a[i]=-a[i-1]<<1;
	string b;
	while(cin >> b){
		int bl=b.length(),ans=0;
		for(int i=bl-1,c=0;i>=0;--i,++c)
			if(b[i]=='1')
				ans+=a[c];
		cout << ans << "\n";
	}
} 
