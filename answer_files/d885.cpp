#include <iostream>
#include <map>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int a,b;
	map <int,int> ans;
	map <int,int> ::iterator iter;
	cin >> a;
	while(a--){
		cin >> b;
		(ans.find(b)==ans.end())?ans[b]=1:ans[b]++;
	}
	for(iter=ans.begin();iter!=ans.end();iter++){
		cout << iter->first << " " << iter->second << "\n";
	}
} 
