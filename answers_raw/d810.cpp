#include <stdio.h>
int b[21]={1},c[21]={1};
int main(){
	int a,n;
	for(int i=0;i<=20;i++){
		b[i+1]+=b[i];
		b[i+2]+=b[i];
		c[i+1]+=c[i];
		c[i+2]+=c[i];
		c[i+3]+=c[i];
	}
	while(scanf("%d %d",&a,&n)>0){
		if(a==1)
			printf("1\n");
		else if(a==2){
			n*=-1;
			printf("%d\n",b[n]);
		}
		else{
			n*=-1;
			printf("%d\n",c[n]);
		}
	}
} 
