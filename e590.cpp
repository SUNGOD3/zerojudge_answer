#include <stdio.h>
char a[12];
int main(){
	long long int x,y;
	int s[10],it;
	while(scanf("%s",&a)>0){
		x=0;y=0;it=0;
		for(int i=0;i<10;++i)
			s[i]=0;
		while(a[it]>='0'){
			++s[a[it]-48];
			++it;
		}
		for(int i=9;i>=0;--i){
			int t=s[i];
			while(t>0){
				t--;
				x*=10;
				x+=i;
				putchar_unlocked(i+48);
			}
		}
		printf(" - ");
		for(int i=1;i<10;++i){
			if(s[i]){
				while(s[i]-->0){
					y*=10;
					y+=i;
					putchar_unlocked(i+48);
				}
				break;
			}
		}
		while(s[0]-->0){
			y*=10;
			putchar_unlocked('0');
		}
		for(int i=2;i<10;++i){
			while(s[i]-->0){
				y*=10;
				y+=i;
				putchar_unlocked(i+48);
			}
		}
		x-=y;
		printf(" = %lld = 9 * %lld \n",x,x/9);
	}
} 
