#include <iostream>
using namespace std;
int main(){
	int n,t,wa=0,ac=10;
	string tt;
	cin >> n;
	string a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	while(ac--){
		cin >> tt;
		if(tt[0]!='B'||tt[1]>'9'||tt[1]<'0'||tt[2]>'9'||tt[2]<'0'||tt[7]>'9'||tt[7]<'0'||tt[8]>'9'||tt[8]<'0'){
			cout << "N\n";
			++wa;
		}
		else{
			string k;
			for(int i=3;i<=6;++i)
				k+=tt[i];
			bool chat=0;
			for(int i=0;i<n;++i){
				if(a[i]==k){
					chat=1;
					break;
				}
			}
			if(chat==0){
				cout << "N\n";
				++wa;
			}
			else
				cout << "Y\n";
		}
	}
	if(wa==0)
		cout << "0";
	else
		cout << "0." << wa << "\n";
} 
