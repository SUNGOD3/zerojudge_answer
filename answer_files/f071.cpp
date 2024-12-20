#include <stdio.h>
int n[101];
int main(){
	int a,b,c,n1,n2,n3,n4,n5,m1,m2,m3,m4,m5,ans=0;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&n1,&n2,&n3,&n4,&n5,&m1,&m2,&m3,&m4,&m5);
	n[n1]+=m1;n[n2]+=m2;n[n3]+=m3;n[n4]+=m4;n[n5]+=m5;
	ans=n[a]+n[b];
	(n[c])?ans-=n[c],(ans<0)?ans=0:0:ans<<=1;
	printf("%d",ans);
} 
