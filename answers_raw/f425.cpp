#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <math.h>
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
	char a=read(),b=read(),c=read(),d=read(),e=read(),f=read();
	float ab=sqrt((a-c)*(a-c)+(b-d)*(b-d)),bc=sqrt((a-e)*(a-e)+(b-f)*(b-f)),ac=sqrt((e-c)*(e-c)+(f-d)*(f-d)),abc=(ab+bc+ac)/2;
	printf("%.0f",sqrt(abc*(abc-ac)*(abc-ab)*(abc-bc))*2);
}
