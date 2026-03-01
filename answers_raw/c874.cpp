#include <iostream>
#include <string>
using namespace std;
string a[121]={"1"},b[121]={"1"};
inline string add(string x,string y){
	int xl=x.length(),yl=y.length();
	bool add=0;
	for(int i=xl-1,j=yl-1;i>=0;--i,--j){
		y[j]+=x[i]-48;
		if(y[j]>'9'){
			y[j]-=10;
			if(j==0)
				add=1;	
			else
				++y[j-1];
		}
	}
	if(add)
		y='1'+y;
	return y;
}
int main(){
	for(int i=0;i<120;++i){
		a[i+1]=add(a[i],a[i]);
		a[i+1]=add(a[i+1],a[i+1]);
		b[i+1]=add(b[i],a[i+1]);
	}
	int n;
	while(cin >> n)
		cout << b[n-1] << "\n";
} 
