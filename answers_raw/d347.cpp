#include <iostream>
using namespace std;
long long int ans[18]={9},n;
int main(){
	for(int i=0;i<17;i+=2){
		ans[i+1]=ans[i]*2;
		ans[i+2]=(ans[i+1])*9;
	}
	while(cin >> n){
		for(int i=0;i<17;++i){
			if(ans[i]>=n){
				if(i%2)
					cout << "Ollie wins.\n";
				else
					cout << "Stan wins.\n";
				break;
			}
		}
	}
} 
