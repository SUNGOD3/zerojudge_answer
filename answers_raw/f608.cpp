#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
using namespace std;
struct p{
	int x,y;
};
p pt[200001];
int n,lis[200001],it;
inline bool cmp(p xx,p yy){
	if(xx.x>yy.x||(xx.x==yy.x&&xx.y>yy.y))return 0;
	return 1;
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
inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
} 
int main(){
	n=read();
	for(int i=0;i<n;++i){
		pt[i].x=read();
		pt[i].y=read();
	}
	sort(pt,pt+n,cmp);
	for(int i=0;i<n;++i){
		if(it==0||pt[i].y>=lis[it-1]){
			lis[it]=pt[i].y;
			++it;
		}
		else{
			*upper_bound(lis,lis+it,pt[i].y)=pt[i].y;
		}
	}
	write(it);
} 
