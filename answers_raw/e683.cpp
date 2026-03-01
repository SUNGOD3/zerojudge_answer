#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	string a;
	cin >> t;
	while(t--){
		cin >> a;
		int al=a.length();
		if(a=="1"||a=="4"||a=="78")
			cout << "+\n";
		else if(a[al-1]=='5'&&a[al-2]=='3')
			cout << "-\n";
		else if(a[0]=='9'&&a[al-1]=='4')
			cout << "*\n";
		else if(a[0]=='1'&&a[1]=='9'&&a[2]=='0')
			cout << "?\n";
		else
			cout << "+\n";
	}
} 
