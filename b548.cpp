#include <stdio.h>
int main(){
	int a[5][5],n,s[26],max=0;
	for(int i=0;i<26;i++)
		s[i]=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	while(1){
		scanf("%d",&n);
		if(n==-1)break;
		for(int i=0;i<5&&n>0;i++){
			for(int j=0;j<5&&n>0;j++){
				if(a[i][j]==n){
					n=0;
					a[i][j]=n;
				}
			}
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]!=0){
				int k=a[i][j],x=0,y=0,xx=0,yy=0;
				a[i][j]=0;
				for(int z=0;z<5;z++){
					x+=a[z][j];
					y+=a[i][z];
					xx+=a[z][z];
					yy+=a[4-z][z];
				}
				if(x==0)
					s[k]++;
				if(y==0)
					s[k]++;
				if(i==j&&xx==0)
					s[k]++;
				if(i+j==4&&yy==0)
					s[k]++;
				if(s[k]>max)
					max=s[k];
				a[i][j]=k;		
			}
		}
	}
	for(int i=0;i<26;i++){
		if(s[i]==max){
			printf("%d",i);
			break;
		}
	}
} 
