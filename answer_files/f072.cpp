#include <stdio.h>
int a[26];
int main(){
	int n=0,ans=0,i;
	scanf("%d",&n);
	int l=n,r=0;
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	for(i=0;i<n;++i){
		if(a[i]==1){
			l=i;
			break;
		}
	}
	for(i=n-1;i>=0;--i){
		if(a[i]==1){
			r=i;
			break;
		}
	}
	for(i=l;i<=r;++i)
		if(a[i]==0&&a[i+1]!=9&&a[i-1]!=9)
			++ans;
	printf("%d",ans);
} 
