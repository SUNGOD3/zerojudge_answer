#include <stdio.h>
using namespace std;
char a[33],b[33];
int main(){
	int k=1120;
	while(k--){
		for(int i=0;i<33;++i){
			scanf("%c",&a[i]);
			printf("%c",a[i]);
		}
		printf("\n");
		for(int i=0;i<33;++i){
			scanf("%c",&b[i]);
			printf("%c",b[i]);
			a[i]+=b[i];
			a[i]-='0';
		}
		printf("\n---------------------------------\n");
		for(int i=32;i>=0;--i){
			if(a[i]>'1'){
				a[i-1]++;
				a[i]-=2;
			}
		}
		for(int i=0;i<32;++i){
			printf("%c",a[i]);
		}
		printf("\n****End of Data******************\n");
	}
} 
