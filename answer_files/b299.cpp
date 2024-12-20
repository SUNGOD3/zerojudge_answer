#include <stdio.h>
int main(){
	long long int t,m,n,p,ans;
	scanf("%d",&t);
	while(t--){
		ans=1;
		scanf("%lld%lld",&n,&m);
		while(m--){
			scanf("%lld",&p);
			if(p<n)
				ans=0;
		}
		(ans==1)?printf("YEEES!!! INKER!\n"):printf("NOOOO!!! JACKY XX!\n");
	}
} 
