#include <stdio.h>
int main(){
	char a[9];
	while(scanf("%s",&a)>0){
		int max1=48,max2=48;
		for(int i=0;i<9;++i){
			if(a[i]>max1){
				max2=max1;
				max1=a[i];
			}
			else if(a[i]>max2)
				max2=a[i];
		}
		max2-=48;max1-=48;
		max1*max1+max2*max2==a[6]*100+a[7]*10+a[8]-5328?puts("Good Morning!"):puts("SPY!");
	}
} 
