#include <stdio.h>
int main(){
	long long int a,b,x,y;
	while(scanf("%lld%lld",&a,&b)>0){
		long long int n[a][5];
		for(long long int i=0;i<a;i++){
			scanf("%lld%lld%lld%lld",&n[i][0],&n[i][1],&n[i][2],&n[i][3]);
			if(n[i][0]>n[i][2]){
				n[i][0]^=n[i][2];
				n[i][2]^=n[i][0];
				n[i][0]^=n[i][2];
			}
			if(n[i][1]>n[i][3]){
				n[i][1]^=n[i][3];
				n[i][3]^=n[i][1];
				n[i][1]^=n[i][3];
			}
			n[i][4]=(n[i][2]-n[i][0])*(n[i][3]-n[i][1]);
		}
		for(long long int i=0,ans=0;i<b;i++,ans=0){
			scanf("%lld%lld",&x,&y);
			for(long long int ii=0;ii<a;ii++){
				if(x>=n[ii][0]&&x<=n[ii][2]&&y>=n[ii][1]&&y<=n[ii][3]){
					ans+=n[ii][4];
				}
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
} 
