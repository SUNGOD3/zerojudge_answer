#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	double h,m;
	cout << fixed <<  setprecision(3);
	while(cin >> a){
		if(a[0]=='0')
			break;
		else if(a.length()==4){
			h=a[0]-48;
			m=(a[2]-48)*10+a[3]-48;
		}
		else{
			h=(a[0]-48)*10+a[1]-48;
			m=(a[3]-48)*10+a[4]-48;
		}
		m*=6;
		h=h*30+m/12;
		if(m>h){
			if(m-h>180)
				cout << 360-(m-h) << endl;
			else
			cout << m-h << endl;
		}
		else{
			if(h-m>180)
				cout << 360-(h-m) << endl;
			else
			cout << h-m << endl;
		}
	}
} 
