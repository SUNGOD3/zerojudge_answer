#include <iostream>
#include <string>
using namespace std;
int a[1041]={0};
int main(){
	for(int i=2;i<=33;i++)
		for(int j=i*2;j<1041;j+=i)
			a[j]=1;
	string b;
	while(cin >> b){
		int sum=0;
		for(int i=0;i<b.length();i++)
			(b[i]<'a')?sum+=b[i]-38:sum+=b[i]-96;	
		(a[sum]==0)?cout << "It is a prime word.\n":cout << "It is not a prime word.\n";
	}
} 
