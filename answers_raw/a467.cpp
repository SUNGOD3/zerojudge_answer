#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a,b;
	int ans=0,flag=0,al=0;
	while(cin >> a){
		if(a=="~")break;
		else if(a=="#"){
			cout << ans << "\n";
			ans=0;
		}
		else{
			al=a.length();
			if(al==1){
				flag=1;
			}
			else if(al==2){
				flag=0;
			}
			else{
				al-=2;
				if(flag){
					while(al--){
						ans<<=1;
						ans+=1;
					}
				}
				else{
					ans<<=al;
				}
			}
		}
	}
} 
