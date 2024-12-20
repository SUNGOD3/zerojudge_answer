#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	int a;
	string c;
	cin >> a;
	map <string,int> b;
	getline(cin,c);
	while(a--){
		string d;
		getline(cin,c);
		for(int i=0;i<c.length();i++){
			if(c[i]==' ')
				break;
			d+=c[i];
		}
		b[d]++;
	}
	for(auto i=b.begin();i!=b.end();i++)
		cout << i->first << " "<<i->second << "\n";
} 
