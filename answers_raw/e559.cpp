#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int arr[101],it;
int main(){
	char a;
	while(a=getchar_unlocked())
		if(a=='\n')break;
	int ans=0,tmp=0,bk=0;
	while(a=getchar_unlocked()){
		if(a=='\n'||a==-1){
			ans+=tmp;
			arr[it]=tmp;
			++it;
			tmp=0;
			if(ans%2){
				putchar_unlocked('N');
				putchar_unlocked('O');
				putchar_unlocked('\n');
			}
			else{
				int a2=ans/2,k[a2+1]={0};
				for(int i=0;i<it;++i)
					for(int j=a2-arr[i];j>=0;--j)
						if(k[j]||j==0)
							k[j+arr[i]]=1;
				if(k[a2]){
					putchar_unlocked('Y');
					putchar_unlocked('E');
					putchar_unlocked('S');
					putchar_unlocked('\n');
				}
				else{
					putchar_unlocked('N');
					putchar_unlocked('O');
					putchar_unlocked('\n');
				}
			}
			it=0;
			ans=0;
			if(a==-1)bk=1;
		}
		else if(a==' '){
			ans+=tmp;
			arr[it]=tmp;
			++it;
			tmp=0;
		}
		else{
			tmp*=10;
			tmp+=a-'0';
		}
		if(bk)break;
	}
} 
