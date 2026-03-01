#include <iostream>
using namespace std;
int GCD(int a, int b){
	if (b)
        while((a %= b) && (b %= a));
	return a + b;
}
int main(){
	string a,b;
	int t,x,y;
	cin >> t;
	for(int c=1;c<=t;++c){
		cin >> a >> b;
		x=0,y=0;
		for(int i=0,al=a.length();i<al;++i){
			x*=2;
			x+=a[i]-'0';
		}
		for(int i=0,al=b.length();i<al;++i){
			y*=2;
			y+=b[i]-'0';
		}
		cout << "Pair #" << c << ": ";
		if(GCD(x,y)!=1)
			cout << "All you need is love!\n";
		else
			cout << "Love is not all you need!\n";
	}
} 
