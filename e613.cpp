#include <iostream>
#include <string> 
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	string a;
	cin >> n;
	while(n--){
		cin >> a;
		int al=a.length();
		if(al==1){
			int b=a[0]-48,ans=1;
			while(b--){
				ans*=66;
				ans%=100;
			}
			cout << ans << "\n";
		}	
		else if(a[al-1]=='0'||a[al-1]=='5')
			cout << "76\n";
		else if(a[al-1]=='1'||a[al-1]=='6')
			cout << "16\n";
		else if(a[al-1]=='2'||a[al-1]=='7')
			cout << "56\n";
		else if(a[al-1]=='3'||a[al-1]=='8')
			cout << "96\n";
		else
			cout << "36\n";
	}
}
