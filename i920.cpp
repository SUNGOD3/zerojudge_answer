#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	int t,c[4];
	string a;
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		bool ac=1;
		for(int i=0;i<4;++i){
			cin >> a;
			c[i]=(a[0]-'0')*600+(a[1]-'0')*60+(a[3]-'0')*10+(a[4]-'0');
		}
		if((c[2]>=c[0]&&c[2]<=c[1])||(c[3]>=c[0]&&c[3]<=c[1])||(c[0]>=c[2]&&c[0]<=c[3])||(c[1]>=c[2]&&c[1]<=c[3]))ac=0;
		cout << "Case " << ca << ": ";
		ac?cout << "Hits Meeting\n":cout << "Mrs Meeting\n";
	}
}
