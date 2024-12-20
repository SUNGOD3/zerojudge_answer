#include <stdio.h>
int ans[27];
char a;
int main(){
	while(a=getchar_unlocked()){
		if(a<46)break;
		++ans[a-'A'];
	}
	for(int i=0;i<=26;++i)
		while(ans[i]--)
			putchar_unlocked(i+'A');
} 
