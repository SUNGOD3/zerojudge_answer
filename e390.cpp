#include <iostream>
#include <map> 
using namespace std;
map<string, int> m = {{"�\", 1}, {"�\", 1}, {"�\", 1},  {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1},{"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}, {"�\", 1}};
int main(){
	string a;
	while(cin >> a){
		if(m.find(a)!=m.end())cout << "Yes\n";
		else cout << "No\n";
	}
} 