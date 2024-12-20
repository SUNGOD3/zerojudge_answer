#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c;
	while(cin >> a >> b >> c){
		int cc=c*2+1,m[cc+1]={0},s=0;
		for(int i=0;i<=cc;i+=a)
			m[i]=1;
		for(int i=0,cb=cc-b;i<=cb;++i)
			if(m[i])
				m[i+b]=1;
		for(int i=cc;i>=c;--i)
			if(m[i]==0){
				s=1;
				break;
			}
		if(s==0)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
} 
