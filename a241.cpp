#include <stdio.h>
long long int two[27]={1},five[13]={1};
int main(){
	for(int i=1;i<27;++i)
		two[i]=two[i-1]<<1;
	for(int i=1;i<13;++i)
		five[i]=five[i-1]*5;
	long long int n;
	int t;
	scanf("%d",&t);
	while(t--){
		int ans=-1;
		scanf("%lld",&n);
		for(int i=0;i<27;++i)
			for(int j=0;j<13;++j)
				if(two[i]*five[j]<=n){
					++ans;
				}
		printf("%d\n",ans);
	}
} 
