#include <stdio.h>
int main(){
	char a;
	int b=0;
	while(a=getchar()){
		if(a==-1)break;
		if(a>='0'){
			b*=10;
			b+=a-'0';
			b%=330000;
		}
		else{
			char c=0;
			char d=0;
			if((b%4==0&&b%100!=0)||b%400==0){
				printf("This is leap year.\n");
				c=1;
				d=1;
			}
			if(b%15==0){
				printf("This is huluculu festival year.\n");
				c=1;
			}
			if(b%55==0&&d==1){
				printf("This is bulukulu festival year.\n");
				c=1;
			}
			if(c==0)
				printf("This is an ordinary year.\n");
			b=0;
			printf("\n");
		}
	}
} 
