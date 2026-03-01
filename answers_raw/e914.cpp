#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		bool ans=0;
		for(int i=18;i<=99;++i){
			int m=(i%10)*10+i/10;
			if(i+n<=99&&(m+n)*2==i+n){
				ans=1;
				cout << m << " ";
			}
		}
		if(ans==0){
			cout << "no answer";
		}
		cout << "\n";
	}
} 
