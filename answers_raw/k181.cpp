#include <iostream>
using namespace std;
string s;
int ct=0;
int main(){
	cin >> s;
	for(int i=0;i<s.size();++i)
		if(s[i]=='8')++ct;
	cout << s << " can get " << ct*10 << "% off.";
}
