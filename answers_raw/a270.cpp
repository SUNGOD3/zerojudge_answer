#include <iostream>
using namespace std;
int main(){
	int t,l[4],c,x;
	while(cin >> t){
		bool ans=0;
		cin >> l[0] >> l[1] >> l[2] >> l[3];
		cin >> c;
		x=c;
		for(int i=0;i<7;++i){
			cin >> c;
			if(x==c)continue;
			int tmp=0;
			for(int p=min(x,c)-1,q=max(x,c)-1;p<q;++p)
				tmp+=l[p];
			if(tmp>t)
				ans=1;
			x=c;
		}
		(ans)?cout << "no\n":cout << "yes\n";
	}
} 
