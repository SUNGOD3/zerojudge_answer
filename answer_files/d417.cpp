#include <stdio.h>
int niin[501][2];
inline void fd(int n){
	int total=0,ni=n*n+n,ii=1;
	for(int i=n+1;i<=n*2;++i,ni+=n,++ii)
		if(ni%ii==0){
			niin[total][0]=ni/ii;
			niin[total][1]=i;
			++total;
		}
	printf("%d\n",total);
	for(int i=0;i<total;++i)
		printf("1/%d = 1/%d + 1/%d\n",n,niin[i][0],niin[i][1]);
}
int main(){
	int n;
	while(scanf("%d",&n)>0)
		fd(n); 
} 
