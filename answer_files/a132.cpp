#include <iostream>
#include <string>
using namespace std;
int main(){
	long long int a;
	while(cin >> a){
		if(a==0)break;
		string ans;
		int n=0;
		while(a>0){
			ans+=a%2+48;
			if(a%2==1)
				n++;
			a/=2;
		}
		cout << "The parity of " ;
		for(int i=ans.length()-1;i>=0;i--)
			cout << ans[i];
		cout << " is " << n << " (mod 2).\n";
	}
} 
