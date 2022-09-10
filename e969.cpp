#include <stdio.h>
int main(){
	int m,t,tt=0,s;
	scanf("%d%d%d",&m,&t,&s);
	if(m<32||(s==1&&m<55))
		puts("Wayne can't eat and drink.");
	else{
		int br=0;
		while(br==0){
			if(s==1){
				if(m>=55){
					m-=55;
					printf("%d: Wayne drinks a Corn soup, and now he ",tt);
					if(m&&m!=1)
						printf("has %d dollars.\n",m);
					else if(m==1)
						printf("has %d dollar.\n",m);
					else
						printf("doesn't have money.\n");
					tt+=t;	
					s=0;
				}
				else
					br=1;
			}
			else{
				if(m>=32){
					m-=32;
					printf("%d: Wayne eats an Apple pie, and now he ",tt);
					if(m&&m!=1)
						printf("has %d dollars.\n",m);
					else if(m==1)
						printf("has %d dollar.\n",m);
					else
						printf("doesn't have money.\n");
					tt+=t;	
					s=1;
				}
				else
					br=1;
			}
		}
	}
} 
