#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
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
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int ans[101]={1,1,2,3,5,7,11,15,22,30,42,56,77,101,135,176,231,297,385,490,627,792,1002,1255,1575,1958,2436,3010,3718,4565,5604,6842,8349,10143,12310,14883,17977,21637,26015,31185,37338,44583,53174,63261,75175,89134,105558,124754,147273,173525,204226,239943,281589,329931,386155,451276,526823,614154,715220,831820,966467,1121505,1300156,1505499,1741630,2012558,2323520,2679689,3087735,3554345,4087968,4697205,5392783,6185689,7089500,8118264,9289091,10619863,12132164,13848650,15796476,18004327,20506255,23338469,26543660,30167357,34262962,38887673,44108109,49995925,56634173,64112359,72533807,82010177,92669720,104651419,118114304,133230930,150198136,169229875,190569292},n;
int main(){
	n=read();
	write(ans[n]);
} 
