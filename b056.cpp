#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <iomanip>
using namespace std;
inline double read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t;
	while(t=read()){
		double y,R,G,B,ans(0);
		t*=t;
		for(int i(0);i<t;++i){
			R=read();
			G=read();
			B=read();
			y = 0.2654 * R + 0.6704 * G + 0.0642 * B;
			ans+=y;
			cout  <<  fixed <<  setprecision(4) << 0.5149 * R + 0.3244 * G + 0.1607 * B << " " << y << " " << 0.0248 * R + 0.1248 * G + 0.8504 * B << "\n"; 
		}
		double tt(t);
		ans/=tt;
		cout  <<  fixed <<  setprecision(4) << "The average of Y is " << ans << "\n";
		t=read();
	}
} 
