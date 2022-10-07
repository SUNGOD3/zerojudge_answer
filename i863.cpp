#include <iostream>
using namespace std;
int t,v,s;
string is;
int main(){
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> is;
		if(is=="donate"){
			cin >> v;
			s+=v;
		}
		else{
			cout << s << "\n";
		}
	}
}
