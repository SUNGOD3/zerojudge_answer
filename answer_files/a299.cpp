#include <stdio.h>
int main(){
	int a,x,y;
	while(scanf("%d",&a)>0){
		int n[a][4],ans=-1;
		for(int i=0;i<a;i++)
			scanf("%d%d%d%d",&n[i][0],&n[i][1],&n[i][2],&n[i][3]);
		scanf("%d%d",&x,&y);
		for(int i=a-1;i>=0;i--){
			if(x>=n[i][0]&&x<=n[i][2]+n[i][0]&&y>=n[i][1]&&y<=n[i][3]+n[i][1]){
				ans=i+1;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
} 
