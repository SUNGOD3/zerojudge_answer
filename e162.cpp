#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char arr[101];
int main(){
	char a,b=0;
	int z=0,zz=0,it=0;
	while(a=getchar_unlocked()){
		if(a=='0'||a=='1'){
			arr[it]=a;
			++it;
		}
		else{
			arr[it]=arr[0];
			for(int i=0;i<it;++i){
				if(arr[i]=='0'){
					++z;
					if(arr[i+1]=='0')
						++zz;
				}
			}
			z*=z;
			zz*=it;
			if(z>zz)
				puts("ROTATE");
			else if(z<zz)
				puts("SHOOT");
			else
				puts("EQUAL");
			z=0;
			zz=0;
			it=0;
			if(a==-1)b=1;
		}
		if(b)break;
	}
} 
