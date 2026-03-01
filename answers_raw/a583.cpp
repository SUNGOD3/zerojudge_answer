#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	float c[b][2]={0},min=10000;
	for(int i=0;i<b;i++){
		scanf("%f%f",&c[i][0],&c[i][1]);
	}
	for(int i=0;i<b;i++){
		for(int j=i+1;j<b;j++){
			float n=sqrt((c[i][0]-c[j][0])*(c[i][0]-c[j][0])+(c[i][1]-c[j][1])*(c[i][1]-c[j][1]));
			if(n<min){
				min=n;
			}
		}
	}
	printf("%.4f",min);
}
