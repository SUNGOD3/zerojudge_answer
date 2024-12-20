#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	cin >> a;
	while(cin >> a){
		for(int i=0;i<a.length();i++){
			if(a[i]>='A'&&a[i]<'X')
				a[i]+=3;
			else
				a[i]-=23;		
		}
		cout << a << endl;
	}
} 
