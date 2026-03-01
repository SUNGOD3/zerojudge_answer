#include <stdio.h>
int main(){
	long long int a,b;
	while(scanf("%lld%lld",&a,&b)>0){
		long long int sum[a];
		for(int i=0;i<a;++i){
			scanf("%lld",&sum[i]);
			(i)?sum[i]+=sum[i-1]:1;
		}
		if(sum[a-1]<b)
			printf("GGGGGZ\n");
		else{
			long long int ans=a+1;
			if(sum[0]>=b)
				printf("1\n");
			else{
				for(int i=0,z=1;i<a;++i,z=1){
					for(int j=i+1;j<a;++j,++z){
						if(sum[j]-sum[i]>=b){
							if(z<ans)
								ans=z;
							break;
						}
					}
				}
				printf("%lld\n",ans);
			}
		}
	}
}
