#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		string b;
		int sum=0;
		for(int i=0;i<a.length()-1;i++)
			if(a[i]>='0'&&a[i]<='9')
				b+=a[i];
		for(int i=0;i<9;i++){
			sum+=(b[i]-48)*(i+1);
		}		
		sum%=11;
		if(sum==10){
			if(a[a.length()-1]=='X')
				cout << "Right\n";
			else{
				a[a.length()-1]='X';
				cout << a << "\n";
			}	
		}
		else{
			if(a[a.length()-1]-48==sum)
				cout << "Right\n";
			else{
				a[a.length()-1]=sum+48;
				cout << a << "\n";
			}	
		}
	}
} 
