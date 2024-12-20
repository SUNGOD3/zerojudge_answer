#include <iostream>
#include <list>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	list <string> ans;
	string a;
	while(cin >> a){
		if(a=="SHOW")break;
		else if(a=="ADD"){
			cin >> a;
			ans.push_back(a);
		}
		else if(a=="INSERT"){
			string b;
			cin >> a >> b;
			for(auto it=ans.begin();it!=ans.end();++it){
				if(*it==b){
					ans.insert(it,a);
					break;
				}
			}
		}
		else{
			cin >> a;
			ans.remove(a);
		}
	}
	for(auto it=ans.begin();it!=ans.end();++it)
		cout << *it << " ";
} 
