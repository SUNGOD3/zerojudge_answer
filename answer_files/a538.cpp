#include <iostream>
using namespace std;
int b;
string n;
inline int mod(string num, int a){
    int res = 0;
    for (int i = 0,nl = num.length(); i < nl; ++i)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}
int main(){
	while(cin >> n){
		if(n=="0")break;
		cout << !mod(n,17) << "\n";
	}
} 
