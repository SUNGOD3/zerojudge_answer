#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		int al=a.length();
		for(int i=0;i<al;++i)
			if(a[i]>='a')
				a[i]-=32;
		if(a=="FOR")
			cout << "4";
		else if(a=="TO")
			cout << "2";
		else if(a=="YOU")
			cout << "u";
		else if(a=="AND")
			cout << "n";
		else
			cout << a[0];
	}
} 
