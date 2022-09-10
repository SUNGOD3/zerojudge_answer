#include <iostream>
using namespace std;
string a="00",b="0000",c="000000",d="00000000";
int n;
string ans[4]={"00\n01\n81\n","0000\n0001\n2025\n3025\n9801\n","000000\n000001\n088209\n494209\n998001\n","00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n"};
int main(){
	/*while(a[0]!=':'){
		int x=a[0]-48,y=a[1]-48,all=(a[0]-48)*10+a[1]-48;
		if((x+y)*(x+y)==all)
			cout << a << "\\n";
		++a[1];
		if(a[1]>'9'){
			++a[0];
			a[1]='0';
		}
	}
	while(b[0]!=':'){
		int x=0,y=0,all=0;
		for(int i=0;i<2;++i){
			x*=10;
			x+=b[i]-48;
		}
		all=x;
		for(int j=2;j<4;++j){
			all*=10;
			all+=b[j]-48;
			y*=10;
			y+=b[j]-48;
		}
		if((x+y)*(x+y)==all)
			cout << b << "\\n";
		++b[3];
		for(int i=3;i>0;--i){
			if(b[i]>'9'){
				++b[i-1];
				b[i]='0';
			}
		}
	}
	while(c[0]!=':'){
		int x=0,y=0,all=0;
		for(int i=0;i<3;++i){
			x*=10;
			x+=c[i]-48;
		}
		all=x;
		for(int j=3;j<6;++j){
			all*=10;
			all+=c[j]-48;
			y*=10;
			y+=c[j]-48;
		}
		if((x+y)*(x+y)==all)
			cout << c << "\\n";
		++c[5];
		for(int i=5;i>0;--i){
			if(c[i]>'9'){
				++c[i-1];
				c[i]='0';
			}
		}
	}
	while(d[0]!=':'){
		int x=0,y=0,all=0;
		for(int i=0;i<4;++i){
			x*=10;
			x+=d[i]-48;
		}
		all=x;
		for(int j=4;j<8;++j){
			all*=10;
			all+=d[j]-48;
			y*=10;
			y+=d[j]-48;
		}
		if((x+y)*(x+y)==all)
			cout << d << "\\n";
		++d[7];
		for(int i=7;i>0;--i){
			if(d[i]>'9'){
				++d[i-1];
				d[i]='0';
			}
		}
	}*/
	while(cin >> n)
		cout << ans[n/2-1] ;
} 
