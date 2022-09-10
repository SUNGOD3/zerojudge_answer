#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(getline(cin,a)){
		int al=a.length(),it=0;
		double r=0,f=0,rf=1,ff=1;
		//-1 1 -i i -2i 2i ; -1+i 1+i -1+2i 1+2i -1-i 1-i -1-2i 1-2i
		if(a[it]=='+')++it;
		else if(a[it]=='-'){
			ff=-1;
			++it;
		}
		for(;it<al;++it){
			if(a[it]>='0'&&a[it]<='9'){
				f*=10;
				f+=a[it]-'0';
			}
			else if(a[it]=='+'||a[it]=='-'){
				r=f;
				rf=ff;
				f=0;
				(a[it]=='-')?ff=-1:ff=1;
			}
			else if(a[it]=='i')
				if(f==0)f=1;
		}
		r*=rf;
		f*=ff;
		cout << fixed << setprecision(3) << sqrt(r*r+f*f) << "\n";
	}
} 
