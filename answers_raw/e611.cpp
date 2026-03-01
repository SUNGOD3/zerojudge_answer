#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		if(a=="0")break;
		cin >> a;
		int ans=a.length(),c=a.length();
		for(int i=0;i<c;i++){
			if(a[i]=='Z'){
				ans=0;
				break;
			}
			else if(a[i]=='R'){
				int n=-1;
				for(int j=i+1;j<c;j++){
					if(a[j]=='D'){
						n=j-i;
						break;
					}
				}
				if(n>0&&n<ans)ans=n;
			}
			else if(a[i]=='D'){
				int n=-1;
				for(int j=i+1;j<c;j++){
					if(a[j]=='R'){
						n=j-i;
						break;
					}
				}
				if(n>0&&n<ans)ans=n;
			}
		}
		cout << ans << "\n";
	}
} 
