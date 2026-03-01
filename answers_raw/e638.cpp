#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char a;
int main(){
	long long int ans=0;
	while(a=getchar_unlocked()){
		if(a==-1)break;
		if(a=='#'){
			if(!ans)
				puts("YES");
			else
				puts("NO");
			ans=0;
			continue;
		}
		ans=((ans+ans)+(a-48))%131071;
	}
}
