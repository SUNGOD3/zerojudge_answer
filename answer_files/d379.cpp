#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b,c;
	cin >> a;
	while(cin >> a >> b >> c){
		int x=0,y=0;
		string aa="0000000000000";
		for(int i=a.length()-1,n=1;i>=0;i--,n*=16){
			if(a[i]>'9')
				x+=(a[i]-55)*n;
			else
				x+=(a[i]-48)*n;
		}
		for(int i=c.length()-1,n=1;i>=0;i--,n*=16){
			if(c[i]>'9')
				y+=(c[i]-55)*n;
			else
				y+=(c[i]-48)*n;
		}
		if(b=="+"){
			int c=x+y;
			for(int i=0,n=4096;i<aa.length();i++,n/=2){
				if(x>=n){
					aa[i]='1';
					x-=n;
				}
				else
					aa[i]='0';
			}	
			cout << aa << " + ";
			for(int i=0,n=4096;i<aa.length();i++,n/=2){
				if(y>=n){
					aa[i]='1';
					y-=n;
				}
				else
					aa[i]='0';
			}	
			cout << aa << " = " << c << "\n";
		}
		else{
			int c=x-y;
			for(int i=0,n=4096;i<aa.length();i++,n/=2){
				if(x>=n){
					aa[i]='1';
					x-=n;
				}
				else
					aa[i]='0';
			}	
			cout << aa << " - ";
			for(int i=0,n=4096;i<aa.length();i++,n/=2){
				if(y>=n){
					aa[i]='1';
					y-=n;
				}
				else
					aa[i]='0';
			}	
			cout << aa << " = " << c << "\n";
		}
	}
} 
