#include <iostream>
#include <map>
using namespace std;
map<string, int> m = {{"�\", 1}, {"�\", 1}, {"�\", 1},  {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}};
int main(){
	string b;
	while(getline(cin,b)){
		int ac=1;
		for(int i=0;i<b.length()&&ac;++i){
			string a;
			a+=b[i];
			if(m.find(a)!=m.end())ac=0;
			a+=b[i+1];
			if(m.find(a)!=m.end())ac=0;
			a+=b[i+2];
			if(m.find(a)!=m.end())ac=0;
		}
		if(ac==0)cout << "Yes\n";
		else cout << "No\n";
	}
} 
