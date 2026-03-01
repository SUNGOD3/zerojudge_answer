#include <stdio.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)>0){
		int a[n]={0},x,y,s=0,ans=0;
		while(m--){
			scanf("%d%d",&x,&y);
			++a[x-1];
			++a[y-1];
		}
		for(int i=0;i<n;++i){
			if(a[i]%2){
				++s;
				if(s>2)
					ans=1;
			}
		}
		if(ans||(s!=2&&s!=0))
			printf("NO\n");
		else
			printf("YES\n");
	}
} 
