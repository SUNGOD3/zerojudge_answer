#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main (){
	string a;
	string b;
	string d;
	int ans=0;
	int c=0;
	int e=0;
	while(cin >> a >> b){
		for(int i=0;i<abs(a.length()-b.length());i++){
			d.push_back('0');
			if(a.length()>b.length()){
				d=d+b;
				b=d;
			}
			else{
				d=d+a;
				a=d;
			}
		} 
		d.clear();
		if(a=="0"&&b=="0"){
			break;
		}
			for(int j=b.length()-1,i=a.length()-1;j>=0&&i>=0;j--){
				c=a[i]-48+b[j]-48;
				c+=e;
				if(c<10){
					e=0;
				}
				if(c>=10){
					e=1;
					ans++;
				}
				i--;
			}
			e=0;
		if(ans>1){
		cout << ans << " carry operations." <<  endl;
	}
		if(ans==1){
		cout << ans << " carry operation." <<  endl;
	}
		if(ans==0){
			cout << "No carry operation." << endl;
		}
		ans=0;
	}

	
} 
