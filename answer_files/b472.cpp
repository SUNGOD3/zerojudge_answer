#include <stdio.h>
int main(){
	int n,na,nb,vs[5][5]={0,-1,1,1,-1,1,0,-1,1,-1,-1,1,0,-1,1,-1,-1,1,0,1,1,1,-1,-1,0};
	while(scanf("%d%d%d",&n,&na,&nb)>0){
		int a[na],b[nb],aw=0,bw=0;
		for(int i=0;i<na;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<nb;i++)
			scanf("%d",&b[i]);
		for(int i=0;i<n;i++){
			if(vs[a[i%na]][b[i%nb]]==1)
				aw++;
			else if(vs[a[i%na]][b[i%nb]]==-1)
				bw++;
		}
		printf("%d %d\n",aw,bw);
	}
} 
