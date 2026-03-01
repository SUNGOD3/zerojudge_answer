#include <stdio.h>
int  main(){
	int n,max=0,ans=0;
	scanf("%d",&n);
	while(scanf("%d",&n)>0){
		if(n>max)
			max=n;
		else if(max-n>ans)
			ans=max-n;
	}
	printf("%d",ans);
} 
