#include <stdio.h>
char b[15][30];
int c[15][30];
int main(){
	for(int i=0;i<15;i++){
		for(int j=0;j<=30;j++){
			scanf("%c",&b[i][j]);
			c[i][j]=0;
		}
	}
	for(int i=0;i<15;i++){
		for(int j=0;j<30;j++){
			if(b[i][j]=='*'){
				for(int x=-1;x<=1;x++){
					for(int y=-1;y<=1;y++){
						if(i+x>=0&&i+x<15&&j+y>=0&&j+y<30)
							c[i+x][j+y]++;
					}
				}
				c[i][j]=-10;
			}
		}
	}
	for(int i=0;i<15;i++){
		for(int j=0;j<30;j++){
			if(c[i][j]<0)printf("*");
			else if(c[i][j]==0)printf(".");
			else printf("%d",c[i][j]);
		}
		printf("\n");
	}
} 
