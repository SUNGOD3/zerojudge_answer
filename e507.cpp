#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a,b;
	while(getline(cin,a)){
		getline(cin,b);
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		string ans;
		for(int i=0,j=0,al=a.length(),bl=b.length();i<al&&j<bl;){
			if(a[i]>b[j]){
				++j;
			}
			else if(a[i]==b[j]){
				ans+=a[i];
				++i;
				++j;
			}
			else{
				++i;
			}
		}
		cout << ans << "\n";
	}
} 
