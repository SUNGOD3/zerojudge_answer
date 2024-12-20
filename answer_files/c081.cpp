#include <iostream>
using namespace std;
int a[3],b[3],c[3];
int main(){
	while(cin >> a[0]){
		cin >> a[1] >> a[2];
		for(int i=0;i<3;++i)
			cin >> b[i];
		for(int i=0;i<3;++i)
			cin >> c[i];
		int ans,aB=a[1]+a[2],aG=a[0]+a[2],aC=a[0]+a[1],bB=b[1]+b[2],bG=b[0]+b[2],bC=b[0]+b[1],cB=c[1]+c[2],cG=c[0]+c[2],cC=c[0]+c[1];
		ans=min(min(min(aB+bG+cC,aB+bC+cG),min(aG+bB+cC,aG+bC+cB)),min(aC+bG+cB,aC+bB+cG));
		if(ans==aB+bC+cG)
			cout << "BCG ";
		else if(ans==aB+bG+cC)
			cout << "BGC ";
		else if(ans==aC+bB+cG)
			cout << "CBG ";
		else if(ans==aC+bG+cB)
			cout << "CGB ";
		else if(ans==aG+bB+cC)
			cout << "GBC ";
		else if(ans==aG+bC+cB)
			cout << "GCB ";
		cout << ans << "\n";
	}
} 
