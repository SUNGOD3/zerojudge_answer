#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	while(cin >> a >> b){
		int al=a.length(),bl=b.length();
		for(int i=0,j=0,k=0;i<al;i++){
			for(k=j;k<bl;k++){
				if(a[i]==b[k]){
					a[i]='0';
					break;
				}
			}
			j=k+1;
			if(a[i]!='0'){
				cout << "No\n" ;
				break;
			}
		}
		if(a[al-1]=='0')
			cout << "Yes\n";
	}
} 
