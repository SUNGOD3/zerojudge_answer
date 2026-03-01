#include <stdio.h>
int p[1001]={1},num[1001]={0};
int main(){
	int k=0;
	for(int i=2;i<=32;i++)
		for(int j=i*2;j<1001;j+=i)
			p[j]=1;
	for(int i=0;i<=1000;i++){
		if(p[i]==0)k++;
		num[i]=k;
	}
	int n,c;
	while(scanf("%d%d",&n,&c)>0){
		printf("%d %d: ",n,c); 
		if(num[n]%2){
			c=(c<<1)-1;
			if(c>=k){
				for(int i=1;i<=n;i++)
					if(p[i]==0)
						printf("%d ",i);
			}
			else{
				int t=0,max=(num[n]+c)/2,min=(num[n]-c)/2;
				for(int i=1;i<=n&&t<max;i++){
					if(p[i]==0){
						t++;
						if(t>min)
							printf("%d ",i);
					}
				}
			}
		}
		else{
			c<<=1;
			if(c>=k){
				for(int i=1;i<=n;i++)
					if(p[i]==0)
						printf("%d ",i);
			}
			else{
				int t=0,max=(num[n]+c)/2,min=(num[n]-c)/2;
				for(int i=1;i<=n&&t<max;i++){
					if(p[i]==0){
						t++;
						if(t>min)
							printf("%d ",i);
					}
				}
			}
		}
		printf("\n\n");
	}
} 
