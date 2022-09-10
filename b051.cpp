#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(string a,string b){
	if(a.length()==b.length())
		return a>b;
	if(a+b>b+a)
		return 1;
	return 0;
}
int main(){
	int a;
	while(cin >> a){
		string b[a];
		for(int i=0;i<a;i++)
			cin >> b[i];
		sort(b,b+a,cmp);
		for(int i=0;i<a;i++)
			cout << b[i];
		cout << "\n";
	}
} 
