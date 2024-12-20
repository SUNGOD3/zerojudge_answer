#include <stdio.h>
int main(){
	int a,b,ans=0,t=0,n;
	scanf("%d%d",&a,&b);
	int c[a];
	for(int i=0,chat=0;i<b;i++,chat=0){
		scanf("%d",&n);
		for(int j=0;j<t&&j<a;j++){
			if(c[j]==n){
				chat=1;
				break; 
			}
		}
		if(chat==0){
			ans++;
			c[t%a]=n;
			t++;
		} 
	}
	printf("%d",ans);
} 
