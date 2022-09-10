#include <iostream>
using namespace std;
long long a,b,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a >> b){
		if(a==0&&b==0)break;
        while(b){
            t = b;
            b = a%b;
            a = t;
    	}
		cout << a << "\n";
	}
} 
