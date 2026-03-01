#include <iostream>
#include <string>

using namespace std;

int main (){
	string a;
	string b;
	string d;
	int ans=0;
	int c=0;
	int e=0;
	int k=0;
	cin >> k;
	while(cin >> a >> b){
		if(a.length()>b.length()){
			for(int i=0;i<a.length()-b.length();i++){
				d.push_back('0'); 
			}
			d = d+b;
			b=d;
		}
		else if(a.length()<b.length()){
			for(int i=0;i<b.length()-a.length();i++){
				d.push_back('0'); 
			}
			d = d+a;
			a=d;
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
		if(ans>=1){
		cout << ans <<  endl;
	}
		if(ans==0){
			cout << 0 << endl;
		}
		ans=0;
	}

	
} 
