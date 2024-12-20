#include <stdio.h>
int sum[17][17],x,y,map[16][16],no(0),ya(0),i(0),j(0),ii,jj;
int main(){
	scanf("%d%d",&x,&y);
	for(i=0;i<x;++i)
		for(j=0;j<y;++j){
			scanf("%d",&map[i][j]);
			if(map[i][j]==5)
				for(ii=-1;ii<=1;++ii)
					for(jj=-1;jj<=1;++jj)
						if(ii+i>=0&&jj+j>=0)
							++sum[ii+i][jj+j];
		}
	for(i=0;i<x;++i)
		for(j=0;j<y;++j)
			if(map[i][j]==5&&sum[i][j]>1)
				map[i][j]=0;
	for(i=0;i<x;++i)
		for(j=0;j<y;++j){
			if(map[i][j]==1)
				for(ii=-1;ii<=1;++ii)
					for(jj=-1;jj<=1;++jj)
						if(ii+i>=0&&jj+j>=0&&map[ii+i][jj+j]==5){
							map[i][j]=0;
							++ya;
							ii=2;
							break;
						}
			if(map[i][j]==1)
				++no;
		}
	printf("%d %d",ya,no);
} 
