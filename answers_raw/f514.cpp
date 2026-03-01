#include <iostream>
using namespace std;
string a,b;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> a >> b;
	int al=a.length(),bl=b.length();
	for(int i=0;i<bl;++i){
		int s=0;
		for(int j=0;j<al;++j){
			if(b[i]==a[j]){
				cout << j+1 << " ";
				a[j]=' ';
				s=1;
				break;
			}
		}
		if(s==0){
			cout << "X "; 
		}
	}
} 
