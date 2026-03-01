#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		if(a.length()<10||a.length()>30)
			cout << "INCORRECT\n";
		else{
			bool ans=0;
			for(int i=a.length()-1;i>=0&&ans==0;i--)
				if(a[i]>'9'||a[i]<'1')
					ans=1;
			for(int i=0;i<a.length()&&ans==0;i++)
				if(a[i]!=a[a.length()-i-1])
					ans=1;
			for(int i=1;i<a.length()&&ans==0;i++)
				if((a[i]-48)>(a[i-1]-48)*2)
					ans=1;
			if(ans==0){
				bool z=0;
				for(int i=0;i<a.length();i++){
					if((a[i]-48)%2==0){
						cout << a[i];
						z=1;
					}
				}
				if(z==0)
					cout << "0";
				cout << "\n";		
			}
			else
				cout << "INCORRECT\n";
		}
	}
} 
