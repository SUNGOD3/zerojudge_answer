#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
inline void write(int x) {
	if(x==0){
		putchar_unlocked('0');
		return;
	}
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
inline void fadd(string x,string y){
	int xl=x.length(),yl=y.length(),xf=0,yf=0,w=200,fsum[251]={0},sum[251]={0};
	while(x[xf]!='.')++xf;
	while(y[yf]!='.')++yf;
	for(int i=xf+1,it=0;i<xl;++i,++it)fsum[it]=x[i]-48;
	for(int i=yf+1,it=0;i<yl;++i,++it)fsum[it]+=y[i]-48;
	if(fsum[200]>4){
		fsum[200]=0;
		++fsum[199];
	}
	for(int i=200;i;--i){
		if(fsum[i]>9){
			fsum[i]-=10;
			++fsum[i-1];
		}
	}
	if(fsum[0]>9)sum[0]=1;
	for(int i=xf-1,it=0;i>=0;--i,++it)sum[it]=x[i]-48;
	for(int i=yf-1,it=0;i>=0;--i,++it)sum[it]+=y[i]-48;
	while(sum[w]==0&&w)--w;
	for(int i=0;i<=w;++i){
		if(sum[i]>9){
			sum[i]-=10;
			++sum[i+1];
		}
	}
	if(sum[w+1])++w;
	for(int i=w;i>=0;--i)write(sum[i]);
	putchar_unlocked('.');
	for(int i=0;i<200;++i)write(fsum[i]);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	char t;
	while(1){
		string a,b;
		t=getchar_unlocked();
		while((t>='0'&&t<='9')||t=='.'){
			a+=t;
			t=getchar_unlocked();
		}
		t=getchar_unlocked();
		while((t>='0'&&t<='9')||t=='.'){
			b+=t;
			t=getchar_unlocked();
		}
		if(t==-1)break;
		fadd(a,b);
		putchar_unlocked('\n');
	}
}
