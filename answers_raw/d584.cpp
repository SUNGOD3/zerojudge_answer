#include <iostream>

using namespace std;

int main(){
	
	int a=0,b=0,ans=0;
	while(cin >> a >> b){
		if(a==0){
			cout << 0 << endl;
		}
		else if(a==1||a==3||a==4){
			if(b>=10&&b<30){
				ans++;
				while(b>10){
					b--;
					ans+=3;
				}
			}
			else if(b>=30&&b<70){
				ans+=62;
				while(b>30){
					b--;
					ans+=3;
				}
			}
			else if(b>=70&&b<120){
				ans+=183;
				while(b>70){
					b--;
					ans+=3;
				}
			}
			else{
				ans+=336;
				while(b>120){
					b--;
					ans+=3;
				}
			}
			cout << ans << endl;
			ans=0;
		}
		else if(a==2){
			if(b>=8&&b<30){
				ans++;
				while(b>8){
					b--;
					ans+=3;
				}
			}
			else if(b>=30&&b<70){
				ans+=68;
				while(b>30){
					b--;
					ans+=3;
				}
			}
			else if(b>=70&&b<120){
				ans+=189;
				while(b>70){
					b--;
					ans+=3;
				}
			}
			else{
				ans+=342;
				while(b>120){
					b--;
					ans+=3;
				}
			}
			cout << ans << endl;
			ans=0;
		}
	}
	
} 
