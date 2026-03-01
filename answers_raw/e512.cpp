#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	double a,b,c,d,e,f,g,h;
	while(cin >> a >> b >> c >> d >> e >> f >> g >> h){
		if(a==e&&b==f){
			float tmp=a;a=c;c=tmp;
			tmp=b;b=d;d=tmp;
		}
		else if(c==g&&d==h){
			float tmp=e;e=g;g=tmp;
			tmp=f;f=h;h=tmp;
		}
		else if(a==g&&b==h){
			float tmp=a;a=c;c=tmp;
			tmp=b;b=d;d=tmp;
			tmp=e;e=g;g=tmp;
			tmp=f;f=h;h=tmp;
		}
		cout<<fixed<<setprecision(3)<< a+g-c << " " << b+h-d<<'\n';
	}
} 
