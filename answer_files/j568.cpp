#include <iostream>
using namespace std;
long long n,t,a,b,c;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n;
		cout << "請使用配方法解下列一元二次方程式\n";
		for(int i=1;i<=n;++i){
			cout << "\n" << i << ". ";
			cin >> a >> b >> c;
			if(a==1){
				cout << "x^2";
			}
			else if(a==-1){
				cout << "-x^2";
			}
			else{
				cout << a << "x^2"; 
			}
			if(b==0){
				
			}
			else if(b==-1){
				cout << "-x";
			}
			else if(b<0){
				cout << b << "x";
			}
			else if(b==1){
				cout << "+x";
			}
			else{
				cout << "+" << b << "x";
			}
			if(c==0){
				
			}
			else if(c<0){
				cout << c ;
			}
			else{
				cout << "+" << c ;
			}
			cout << "=0\n";
		}
		cout << "\n考試要加油口屋\n";
	}
} 
