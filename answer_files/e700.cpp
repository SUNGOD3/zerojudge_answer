#include <stdio.h>
int main(){
	int m,n;
	while(scanf("%d/%d",&m,&n)>0){
		if((m==1&&n>=21)||(m==2&&n<=19))
			printf("¤ô²~®y\n");
		else if((m==2&&n>=20)||(m==3&&n<=20))
			printf("Âù³½®y\n");
		else if((m==3&&n>=21)||(m==4&&n<=20))
			printf("¨d¦Ï®y\n");
		else if((m==4&&n>=21)||(m==5&&n<=21))
			printf("ª÷¤û®y\n");
		else if((m==5&&n>=22)||(m==6&&n<=21))
			printf("Âù¤l®y\n");
		else if((m==6&&n>=22)||(m==7&&n<=22))
			printf("¥¨ÃÉ®y\n");
		else if((m==7&&n>=23)||(m==8&&n<=21))
			printf("·à¤l®y\n");
		else if((m==8&&n>=22)||(m==9&&n<=23))
			printf("³B¤k®y\n");
		else if((m==9&&n>=24)||(m==10&&n<=23))
			printf("¤Ñ¯¯®y\n");
		else if((m==10&&n>=24)||(m==11&&n<=22))
			printf("¤ÑÃÈ®y\n");
		else if((m==11&&n>=23)||(m==12&&n<=22))
			printf("®g¤â®y\n");
		else 
			printf("¼¯½~®y\n");
	}
} 
