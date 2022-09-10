#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i+=2){
		for(int j=0;j<n;j+=2){
			if(a[i][j]<a[i+1][j]){
				a[i][j]^=a[i+1][j];
				a[i+1][j]^=a[i][j];
				a[i][j]^=a[i+1][j];
			}
			if(a[i][j]<a[i][j+1]){
				a[i][j]^=a[i][j+1];
				a[i][j+1]^=a[i][j];
				a[i][j]^=a[i][j+1];
			}
			if(a[i][j]<a[i+1][j+1]){
				a[i][j]^=a[i+1][j+1];
				a[i+1][j+1]^=a[i][j];
				a[i][j]^=a[i+1][j+1];
			}
		}
	}
	for(int i=0;i<n;i+=2){
		for(int j=0;j<n;j+=2)
			printf("%d ",a[i][j]);
		printf("\n");
	}
} 
