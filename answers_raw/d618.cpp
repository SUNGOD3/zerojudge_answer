#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a;
	while(n--){
		cin >> a;
		int al=a.length(),ans=1;
		for(int i=0;i<al;++i){
			if(a[i]=='1')
				ans=1;
			else if(a[i]=='2')
				if(ans==1||ans==5||ans==6||ans==7)
					ans=2;
			else if(a[i]=='3')
				if(ans==1||ans==5||ans==6||ans==7||ans==4)
					ans=3;
			else if(a[i]=='4')
				if(ans==1||ans==5||ans==6||ans==7||ans==3)
					ans=4;
			else if(a[i]=='5')
				if(ans==1||ans==5||ans==6||ans==7)
					ans=5;
			else if(a[i]=='6')
				if(ans==1||ans==5||ans==6||ans==7)
					ans=6;	
			else
				if(ans==1||ans==5||ans==6||ans==7)
					ans=7;	
		}
		cout << ans << "\n";
	}
} 
