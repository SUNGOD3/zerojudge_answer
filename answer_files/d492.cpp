#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t;
	float n;
	string a;
	cin >> t;
	getline(cin,a);
	getline(cin,a);
	while(t--){
		map <string,float> ans;
		n=0;
		while(getline(cin, a) && a != "" ){
			ans[a]++;
			n++;
		}
		for(auto i=ans.begin();i!=ans.end();i++)
			cout  << i->first << " " <<  fixed <<  setprecision(4) << i->second/n*100 <<  "\n";
		if(t!=0)
		cout << "\n";
	}
} 
