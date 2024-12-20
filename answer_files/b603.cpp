#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)>0){
		int b(y2-y1),x21(x2-x1),a(x21*x21),c(-(x1<<1)*b),d(b*x1*x1 + y1*a),g(__gcd(a, b));
		g = __gcd(g, c), g = __gcd(g, d);
		printf("%dy = %dx^2 + %dx + %d\n",a/g,b/g,c/g,d/g);
	}
}
