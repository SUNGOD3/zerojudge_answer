#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
string a[1001]={"1"},b[1001]={"1"};
inline string add(string x,string y){
	int xx[303]={0},xl(x.length()-1),i(0);
	string ans;
	for(;i<=xl;++i){
		xx[i]+=y[xl-i]+x[xl-i]-96;
		if(xx[i]>9){
			xx[i]-=10;
			++xx[i+1];
		}
	}
	++xl;
	if(!xx[xl])--xl;
	for(;xl>=0;--xl)
		ans+=xx[xl]+48;
	return ans;
}
inline void write(string x) {
	for(int i=0,xl=x.length();i<xl;++i)
		putchar_unlocked(x[i]);
	putchar_unlocked(10);
}
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	int n;
	for(int i=1;i<1001;++i){
		a[i]=add(a[i-1],a[i-1]);
		b[i]=add(a[i],b[i-1]);
	}
	while(n=read())write(b[n-1]);
} 
