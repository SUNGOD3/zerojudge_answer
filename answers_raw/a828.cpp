#include <stdio.h>
int main(){
	int a,cl,f,s;
	while(scanf("%d",&a)>0){
		cl=a/81+3;
		f=((a-1)%81)/9+1;
		s=(a%81)%9;
		if(s==0)s=9;
		if(s<=f)s--;
		if(a%81==0){
			f=9;
			s=8;
			cl--;
		}
		while(1){
			printf("%d",f);
			cl--;
			if(cl==0)break;
			printf("%d",s);
			cl--;
			if(cl==0)break;
		}
		printf("\n");
	}
} 
