#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	char c;
	cin >> c;
	long long int a;
	while(n--){
		cin >> a;
		int mm=m;
		string t;
		while(mm--){
			if(a%2==0)
				t+='.';
			else
				t+=c;
			a/=2;
		}
		for(int i=m-1;i>=0;i--){
			cout << t[i] << " ";
		}
		cout << "\n";
	}
} 
