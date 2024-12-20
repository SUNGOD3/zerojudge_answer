#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		int al=a.length();
		stack <char> n;
		string tmp;
		for(int i=0;i<al;++i)
			if(a[i]<='9')
				n.push(a[i]);
		for(int i=0;i<al;++i){
			if(a[i]<='9'){
				if(!tmp.empty()){
					reverse(tmp.begin(),tmp.end());
					cout << tmp;
					tmp.clear();
				}
				cout << n.top();
				n.pop();
			}
			else
				tmp+=a[i];
		}
		if(!tmp.empty()){
			reverse(tmp.begin(),tmp.end());
			cout << tmp;
			tmp.clear();
		}
		cout << "\n";
	}
} 
