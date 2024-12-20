#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int w;
	int n;
	char b,c;
	cin >> w;
	while(w--){
		cin >> n;
		string a;
		while(n--){
			cin >> b >> c;
			a+=b+c-48;
		}
		for(int i=a.length()-1;i>0;i--){
			if(a[i]>'9'){
				a[i]-=10;
				a[i-1]++;
			}
		}
		if(a[0]>'9'){
			cout << '1';
			a[0]-=10;
		}
		if(w!=0)
		cout << a << "\n\n";
		else
		cout << a << "\n";
	}
} 
