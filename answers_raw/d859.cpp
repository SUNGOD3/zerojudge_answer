#include <stdio.h>
int ans=1;
void dfs(int n){
	n>>=1;
	for(int i=1;i<=n;i++){
		ans++;
		dfs(i);
	}
}
int main(){
	int a;
	scanf("%d",&a);
	dfs(a);
	printf("%d",ans);
} 
