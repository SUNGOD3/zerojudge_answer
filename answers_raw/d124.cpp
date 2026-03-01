#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	while(cin >> a){
		int n=0;
		if(a[0]=='-'){
			for(int i=1;i<a.length();i++)
				n+=a[i]-48;
		}
		else{
			for(int i=0;i<a.length();i++)
				n+=a[i]-48;
		}
		
		if(n%3==0)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}
