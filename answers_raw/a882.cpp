#include <stdio.h>
int main(){
	int a;
	char b[5001];
	scanf("%d",&a);
	getchar();
	while(a--){
		int i=0,ans=0;
		while((b[i]=getchar())!='\n'){
			(b[i]=='X')?ans+=2:(b[i]=='H')?ans++:0;
    		++i;
    	}
    	printf("%d\n",ans);
	}
} 
