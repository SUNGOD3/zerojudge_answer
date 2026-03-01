#include <iostream>
using namespace std;
int main(){
	string a,b;
	cin >> a;
	while(cin >> a >> b){
		int al=a.length(),bl=b.length();
		if(al!=bl){
			cout << "No\n";
		}
		else{
			while(al--){
				if(a[al]=='a'||a[al]=='e'||a[al]=='i'||a[al]=='o'||a[al]=='u'){
					a[al]='a';
				}
			}
			while(bl--){
				if(b[bl]=='a'||b[bl]=='e'||b[bl]=='i'||b[bl]=='o'||b[bl]=='u'){
					b[bl]='a';
				}
			}
			if(a==b){
				cout << "Yes\n";
			}
			else{
				cout << "No\n";
			}
		}
	}
} 
