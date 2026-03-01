#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	long long int b,c;
	while(cin >> a >> b >> c){
		long long int ans=0;
		string a2;
		for(int i=0,al=a.length();i<al;++i){
			ans*=b;
			if(a[i]<='9')
				ans+=a[i]-48;
			else
				ans+=(a[i]-'A'+10);
		}
		if(ans==0)
			cout << "      0\n";
		else{
			while(ans){
				long long int k=ans%c;
				if(k>=10)
					a2+=k+'A'-10;
				else
					a2+=k+'0';
				ans/=c;
			}
			if(a2.length()>7)
				cout << "  ERROR\n";
			else{
				reverse(a2.begin(),a2.end());
				cout << setw(7) << a2 << "\n";
			}
		}
	}
} 
