#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int m;
	string n,x;
	cin >> n >> m;
	while(m--){
		cin >> x;
		int a=0,b=0;
		for(int i=0;i<n.length();++i){
			if(n[i]==x[i]){
				++a;
				x[i]='a';	
			}
		}
		for(int i=0;i<n.length();++i){
			if(n[i]>='0'&&n[i]<='9')
			for(int j=0;j<n.length();++j){
				if(n[i]==x[j]){
					++b;
					x[j]='b';
					break;
				}
			}
		}
		cout << a << "A" << b << "B\n";
	}	
} 
