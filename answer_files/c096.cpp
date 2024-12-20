#include <iostream>
using namespace std;
int main(){
	int n,ca=0;
	while(cin >> n){
		if(n==0)break;
		if(ca)cout << "\n";
		bool chat=0;
		int ans[10001]={0},a,b,c;
		for(int i=0;i<n;++i){
			cin >> a >> b >> c;
			c-=b;
			for(int j=a,i=0;j+i*c<10000;++i){
				++ans[j+i*c];
			}
		}
		cout << "Case #" << ++ca << ":\n";
		for(int i=0;i<10000;++i){
			if(ans[i]==n){
				cout << "The actual year is " << i << ".\n";
				chat=1;
				break;
			}
		}
		if(chat==0){
			cout << "Unknown bugs detected.\n";
		}
	}
	cout << "\n"; // for UVA
} 
