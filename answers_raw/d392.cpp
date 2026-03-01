#include <iostream>
#include <string>

using namespace std;

int main () {
	
	string a;
	long long int number=0;
	long long int ans=0;
	while(getline(cin,a)){
		for(int i=0;i<a.length();i++){
			if(a[i]>=48&&a[i]<=57){
				number+=a[i]-48;
				while(a[i+1]>=48&&a[i+1]<=57){
					i++;
					number*=10;
					number+=a[i]-48;
				}
			}
			ans+=number;
			number=0;
		}
		cout << ans << endl;
		ans=0;
	}
	
	
	
}
