#include <iostream>
#include <set>
using namespace std;
set <string> st;
string s;
bool ac;
int main(){
	while(cin >> s >> ac){
		if(ac==0){
			if(st.count(s)==0){
				st.insert(s);
				cout << s << "\n";
			}
		}
	}
} 
