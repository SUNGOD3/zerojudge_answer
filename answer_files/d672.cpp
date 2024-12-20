#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	while(cin >> a){
		if(a!="0"){
			cout << a;
			int de=1,n=0,i;
			for(i=0;i<a.length();i++)
				n+=a[i]-48;
			if(n%9==0){
				while(n>9){
					for(a.clear();n>0;n/=10)
						a+=n%10+48;
					for(i=0;i<a.length();i++)
						n+=a[i]-48;
					de++;
				}
				cout <<" is a multiple of 9 and has 9-degree " << de << "."<< endl; 
			}
			else
				cout <<" is not a multiple of 9.\n";
		}
	}
}
