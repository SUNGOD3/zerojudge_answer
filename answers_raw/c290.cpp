#include <iostream>
#include <string>

using namespace std;

int main(){
	int A,B=0;
	string a;
	while(cin >> a){
		if(a.length()%2==1){
			for(int i=0;i<a.length();i+=2){
				A+=(a[i]-48);
			}
			for(int i=1;i<a.length()-1;i+=2){
				B+=(a[i]-48);
			}
		}
		else{
			for(int i=0;i<a.length()-1;i+=2){
				A+=(a[i]-48);
			}
			for(int i=1;i<a.length();i+=2){
				B+=(a[i]-48);
			}
		}
		if(A>=B){
			cout << A-B << endl;
		}
		else{
			cout << B-A << endl;
		}
		A=0;B=0;
	}
} 
